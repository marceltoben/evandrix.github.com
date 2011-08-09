jQuery(function ($) {

    $('.dnnControlPanel').wrap(function () {
        return '<div id="dnnCPWrap"><div id="dnnCPWrapLeft"><div id="dnnCPWrapRight"></div></div></div>'
    });

    $('[id$="CommonTasksPanel"]').detach().appendTo('#dnnCommonTasks .megaborder');
    $('[id$="CurrentPagePanel"]').detach().appendTo('#dnnCurrentPage .megaborder');
    $('[id$="AdminPanel"]').detach().appendTo('#dnnOtherTools .megaborder');

    function fixPadding() {
        var $wrapper = $('#dnnCPWrap');
        if ($wrapper.hasClass('Pinned')) {
            $wrapper.parent().css({ paddingBottom: '0' });
        }
        else {
            //$wrapper.parent().css({ paddingBottom: $('.dnnCPHeader').height() + 5 + 'px' });
        	$(document.body).css({ marginTop: $wrapper.outerHeight() });
        }
    }

    fixPadding();
});