(function ($) {
	
	$(document).ready(function () {
		$(".standings-head").click(function() {
			$(this).parent().toggleClass('closed open');
		});	
	});

})(jQuery);

