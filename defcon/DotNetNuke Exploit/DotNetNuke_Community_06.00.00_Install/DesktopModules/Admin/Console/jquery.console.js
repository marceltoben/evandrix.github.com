(function($) {
	$.fn.dnnConsole = function(options) {
		var opts = $.extend({}, $.fn.dnnConsole.defaults, options);

		$(this).find("img").each(function() {
			this.style.borderWidth = "0px";
		});

		if (opts.showTooltip && opts.showDetails != "Show") {
			$(this).find("div > div").each(function() {
				var $this = $(this);
				var $title = $this.find("h3");
				var $desc = $this.find("div");
				var tooltip = "";
				if ($title.length > 0) {
					tooltip = $title.text();
				}
				if ($desc.length > 0) {
					if (tooltip != "")
						tooltip += " - ";
						
					tooltip += $desc.text();
				}
				if (tooltip != "")
					this.title += tooltip;
			});
		}

		function _changeView(jObj) {
			var style = opts.selectedSize == "IconFile" ? "console-small" : "console-large";
			style += opts.showDetails == "Show" ? "-detail" : "";

			if (opts.selectedSize == "IconFile") {
				$(jObj).find("div > div img").hide();
				$(jObj).find("div > div img:first-child").show();
			}
			else {
				$(jObj).find("div > div img").show();
				$(jObj).find("div > div img:first-child").hide();
			}

			$(jObj).find("div").removeClass(opts.currentClass).addClass(style);

			opts.currentClass = style;
		}

		$(this).find("div > div").bind(
			"click"
			, function() {
				if ($(this).children("a").length > 0)
					window.location.href = $(this).children("a")[0].href;
			}
		);

		$(this).find("div > div").hover(
			function(e) { $(this).addClass("console-mouseon"); }
			, function(e) { $(this).removeClass("console-mouseon"); }
		);

		var self = this;
		$(this).find("select").bind("change", function() {
			var data = "";
			if (this.value == "IconFile" || this.value == "IconFileLarge") {
				opts.selectedSize = this.value;
				data = "CS=" + opts.selectedSize;
			}
			if (this.value == "Show" || this.value == "Hide") {
				opts.showDetails = this.value;
				data = "CV=" + opts.showDetails;
			}

			_changeView(self, opts);

			if (data != "") {
				if (opts.tabModuleID.toString() != "-1") {
					data = data + "&CTMID=" + opts.tabModuleID.toString();
					$.ajax({
						type: 'get',
						data: data,
						error: function() {
							return;
						},
						success: function(msg) {
							return;
						}
					});
				}
			}
		});

		_changeView(this);

		//this[0].style.display = "inline";
		return this;
	};

	$.fn.dnnConsole.defaults = { allowIconSizeChange: true, allowDetailChange: true, selectedSize: 'IconFile', showDetails: 'Hide', showTooltip: true };
})(jQuery);
