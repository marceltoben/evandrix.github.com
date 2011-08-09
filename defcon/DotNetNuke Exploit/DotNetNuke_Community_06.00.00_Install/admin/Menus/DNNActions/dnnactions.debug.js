(function ($) {
    $.fn.dnnActionMenu = function (options) {
        var opts = $.extend({},
            $.fn.dnnActionMenu.defaultOptions, options),
            $moduleWrap = this;

        $moduleWrap.each(function () {

            var $module = $(this);

            if ($module.find(opts.menuSelector).size() > 0) {
                //hover event
                function hoverOver($m, opacity, effectMenu) {
                    var $border = $m.children('.' + opts.borderClassName);
                    if (!$border.size() > 0) {
                        $border = $('<div class="' + opts.borderClassName + '"></div>')
                        .prependTo($m).css({ opacity: 0 });
                    }
                    $m.attr('style', 'z-index:904;');
                    if (effectMenu) {
                        $m.find(opts.menuActionSelector).fadeTo(opts.fadeSpeed, opacity);
                    }
                    $m.children('.' + opts.borderClassName).fadeTo(opts.fadeSpeed, opacity);
                };

                //hover out event
                function hoverOut($m, opacity, effectMenu) {
                    $m.removeAttr('style');
                    $m.children('.' + opts.borderClassName).stop().fadeTo(opts.fadeSpeed, 0);
                    if (effectMenu) {
                        $m.find(opts.menuActionSelector).stop().fadeTo(opts.fadeSpeed, opacity);
                    }
                }

                $module.hoverIntent({
                    sensitivity: opts.hoverSensitivity,
                    timeout: opts.hoverTimeout,
                    interval: opts.hoverInterval,
                    over: function () {
                        hoverOver($(this).data('intentExpressed', true), 1, true);
                        if (opts.debug && console) {
                            console.log('module hover intent over');
                        }
                    },
                    out: function () {
                        hoverOut($(this).data('intentExpressed', false), opts.defaultOpacity, true);
                        if (opts.debug && console) {
                            console.log('module hover intent out');
                        }
                    }
                });

                $module.hover(function () {
                    hoverOver($(this), opts.defaultOpacity, false);
                    if (opts.debug && console) {
                        console.log('module hover over');
                    }
                },
                function () {
                    if (opts.debug && console) {
                        console.log('module hover out');
                    }
                    var $this = $(this);
                    if (!$this.data('intentExpressed')) {
                        hoverOut($this, 0, false);
                    }
                });

                function setMenuPosition(menuContainer) {
                    var $menuBody = $module.find(opts.menuSelector).show(),
                        availableRoom = ($(window).height() - ((menuContainer.offset().top - $(window).scrollTop()) + menuContainer.height()));

                    if ($menuBody.height() > availableRoom) {
                        $menuBody.position({ my: 'left bottom', at: 'left top', of: menuContainer });
                    }
                    else {
                        $menuBody.position({ my: 'left top', at: 'left bottom', of: menuContainer });
                    }
                }

                $module.find(opts.menuActionSelector).css({ opacity: opts.defaultOpacity });

                $module.find(opts.menuWrapSelector).hoverIntent({
                    sensitivity: opts.hoverSensitivity,
                    timeout: opts.hoverTimeout,
                    interval: opts.hoverInterval,
                    over: function () {
                        if (opts.debug && console) {
                            console.log('module action menu hover intent over');
                        }

                        setMenuPosition($(this));

                        $module.find(opts.menuSelector).fadeTo(opts.fadeSpeed, 1);

                    },
                    out: function () {
                        if (opts.debug && console) {
                            console.log('module action menu hover intent out');
                        }
                        $module.find(opts.menuSelector).stop().fadeTo(opts.fadeSpeed, 0).hide();
                    }
                });

                $module.find(opts.menuSelector).children().css({ opacity: 1 }); //Compact IE7

                $module.find(opts.menuWrapSelector).draggable({
                    containment: $module.children().eq(1)
					, start: function (event, ui) {
					    $module.find(opts.menuSelector).hide();
					}
					, stop: function (event, ui) {
					    setMenuPosition($(this));
					    $module.find(opts.menuSelector).show();
					}
                });

            }

        });

        return $moduleWrap;
    };

    $.fn.dnnActionMenu.defaultOptions = {
        menuWrapSelector: '.dnnActionMenu',
        menuActionSelector: '.dnnActionMenuTag',
        menuSelector: 'ul.dnnActionMenuBody',
        defaultOpacity: 0.3,
        fadeSpeed: 'fast',
        borderClassName: 'dnnActionMenuBorder',
        hoverSensitivity: 2,
        hoverTimeout: 200,
        hoverInterval: 200,
        debug: false
    };

    $(document).ready(function () {
        $('.DnnModule').dnnActionMenu();
    });

})(jQuery);