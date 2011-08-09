jQuery(document).ready(function ($) {
    var canHide = false;

    function EnableHide() {
        canHide = true;
    }

    function megaHoverOver() {
        hideAll();
        $(this).parent().find(".megaborder").stop().fadeTo('fast', 1).show(); //Find sub and fade it in
    }

    function hideAll() {
        $(".dnnadminmega .megaborder").stop().fadeTo('fast', 0, function () { //Fade to 0 opacity
            $(this).hide();  //after fading, hide it
        });
    }


    //Set custom configurations
    //This is the config used for showing the menue
    var config = {
        sensitivity: 2, // number = sensitivity threshold (must be 1 or higher)
        interval: 200, // number = milliseconds for onMouseOver polling interval
        over: megaHoverOver, // function = onMouseOver callback (REQUIRED)
        timeout: 100, // number = milliseconds delay before onMouseOut
        out: function () { return null; } // function = onMouseOut callback (REQUIRED)
    };

    //This is the config used for hiding the menue
    var hideConfig = {
        sensitivity: 2, // number = sensitivity threshold (must be 1 or higher)
        interval: 1, // number = milliseconds for onMouseOver polling interval
        over: function () { return; }, // function = onMouseOver callback (REQUIRED)
        timeout: 300, // number = milliseconds delay before onMouseOut
        out: function () {
            if (canHide) hideAll();
        } // function = onMouseOut callback (REQUIRED)
    };

    $(".dnnadminmega .megaborder").css({ 'opacity': '0' }); //Fade sub nav to 0 opacity on default
    $(".dnnadminmega .megaborder").find(".dnnPrimaryAction").css({ opacity: 1 }); //Compact IE7

    $(".dnnadminmega > li").mouseenter(EnableHide); //Hovering over CP will re-enable hiding.

    //hide menu if user double clicks while they are outside of the
    //control panel
    $(document).dblclick(function () {
        if (!canHide)
            hideAll();
    })

    //Hide menu if Esc key is pressed
    $(document).keyup(function (e) {
        if (e.keyCode == 27) {
            hideAll();
        }
    });

    $(".dnnadminmega > li > a").hoverIntent(config); //Trigger Hover intent with custom configurations
    $(".dnnadminmega > li").hoverIntent(hideConfig);

    //Hovering over a the dropdown will re-enable autohide
    $(".dnnadminmega .megaborder").focus(function () {
        canHide = true;
    });

    //Hovering over a telerik dropdown will disable autohide
    //need this to disable hide when the drop down expands beyond the menu body
    $('.rcbSlide li').live('mouseover', function () {
        canHide = false;
    });

    $('input').live('focus', function () {
        canHide = false;
    });

    $('select').live('focus', function () {
        canHide = false;
    });
});