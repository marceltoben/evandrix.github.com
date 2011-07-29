//  Copyright (c) 2011 Richard Gazdik. All rights reserved.
//  http://richard.gazdik.name


trace = function(s) { try { console.log(s) } catch (e) { alert(s) }};

function pageTurn(direction) {
	var newPage;
	if (direction == 'next' && $('.page.selected').index() < $('.page').length-1)  newPage = $('.page.selected').next();
	else if (direction == 'prev' && $('.page.selected').index() > 0) newPage = $('.page.selected').prev();
	if (newPage) {
		$('.page').removeClass('selected');
		newPage.addClass('selected');
		jQuery.scrollTo.window().queue([]).stop();
		$(window).scrollTo(newPage,1200,{easing:'easeOutQuint'});
		_gaq.push(['_trackEvent', 'Paging', 'Turn to page '+(newPage.index()+1)]); //stat
	}
}

function imageChange(direction) {
	var next;
	var selectedIndex = $('.page.selected .selector.selected').index();
	if (direction == 'next') next = selectedIndex+1 < $('.page.selected .selector').length ? selectedIndex+1 : 0;
	else next = selectedIndex-1 >= 0  ? selectedIndex-1 : $('.page.selected .selector').length-1;
	$('.page.selected .selector').eq(next).trigger('click');
}

function resizePages() {
	var h = $(window).height();
	var height  =  h < 640 ? 640 : h;
	$('.page').css('height',height);
}


$(document).ready(function() {
		
	
	
	$('.page .button').click(function(e) {
		pageTurn('next');
	});
	
	//init page2
	$('.page2 .images img, .page2 .links .link').fadeTo(0,0);
	$('.page2 .selector').click(function() {
		if ($('.page2 .selector.selected').length > 0) {
			var oldi = $('.page2 .selector.selected').index();
			$('.page2 .images img:eq('+oldi+'),  .page2 .links .link:eq('+oldi+')').stop().fadeTo(300,0, function() {$(this).css('visibility','hidden')});
		}
		$('.page2 .selector').removeClass('selected');
		$(this).addClass('selected');
		var i = $(this).index();
		$('.page2 .images img:eq('+i+'),  .page2 .links .link:eq('+i+')').css('visibility','visible').stop().fadeTo(500,1);
		var img_id = $('.page2 .images img:eq('+i+')').attr('id');
		var pos = {'x':img_id.split("_")[2],'y':img_id.split("_")[3]};
		$('.page2 .bubble').stop().animate({'left':pos.x,'top':pos.y},600);
	});
	$('.page2 .images').click(function(e) {
		imageChange((e.pageX - $(this).offset().left) > 350 ? 'next' : 'prev');
	});
	$('.page2 .selector').eq(0).trigger('click');
	
	
	//init page5
	$('.page5 .images img, .page5 .links .link').fadeTo(0,0);
	$('.page5 .selector').click(function() {
		if ($('.page5 .selector.selected').length > 0) {
			var oldi = $('.page5 .selector.selected').index();
			$('.page5 .images img:eq('+oldi+'),  .page5 .links .link:eq('+oldi+')').stop().fadeTo(300,0, function() {$(this).css('visibility','hidden')});
		}
		$('.page5 .selector').removeClass('selected');
		$(this).addClass('selected');
		var i = $(this).index();
		$('.page5 .images img:eq('+i+'),  .page5 .links .link:eq('+i+')').stop().css('visibility','visible').fadeTo(500,1);
		var img_id = $('.page5 .images img:eq('+i+')').attr('id');
		var pos = {'x':img_id.split("_")[2],'y':img_id.split("_")[3]};
		$('.page5 .bubble').stop().animate({'left':pos.x,'top':pos.y},600);
	});
	$('.page5 .images').click(function(e) {
		var nextPage = (e.pageX - $(this).offset().left) > 350 ? true : false;
		var next;
		var selectedIndex = $('.page5 .selector.selected').index()
		if (nextPage) next = selectedIndex+1 < $('.page5 .selector').length ? selectedIndex+1 : 0;
		else next = selectedIndex-1 >= 0  ? selectedIndex-1 : $('.page5 .selector').length-1;
		$('.page5 .selector').eq(next).trigger('click');
	});
	$('.page5 .selector').eq(0).trigger('click');
	
	//add facebook nodes
	$('#fb-counter').append('<fb:like href="https://www.facebook.com/pages/Contrast-Rebellion/164278210294711" send="false" layout="box_count" width="450" show_faces="true" font="arial"></fb:like>');
	$('#fb-fans').append('<fb:fan profile_id="164278210294711" connections="20" stream="0" width="600" height="250" css="http://www.contrastrebellion.com/public/css/fb_likebox.css?1"></fb:fan>');
	
	//add gplus node
	$('#gplus-counter').append('<g:plusone size="tall"></g:plusone>');
 
	//facebook init
	FB.init({ appId : '230491903632065', status : true, cookie : true, xfbml : true});
	
	//resize
	$(window).resize(function(e) {
		resizePages();
	});
	resizePages();
	
	//scroll
	$(window).scroll(function(e) {
		var top = $(document).scrollTop();
		var wHeight = Math.max(640,$(window).height());
		
		//page3 and page 4 anims
		if (top < wHeight) {
			$('.logo .fist').css('top',70+top/2);
			$('.logo .bg').css({'-webkit-transform':'rotate('+top+'deg)','-moz-transform':'rotate('+top+'deg)','-o-transform':'rotate('+top+'deg)','-ms-transform':'rotate('+top+'deg)','transform':'rotate('+top+'deg)'});
		}
		if (top > 2*wHeight && top < 4*wHeight) {
			$('.page3 .bg, .page4 .bg').css({'-webkit-transform':'rotate('+top+'deg)','-moz-transform':'rotate('+top+'deg)','-o-transform':'rotate('+top+'deg)','-ms-transform':'rotate('+top+'deg)','transform':'rotate('+top+'deg)'});
		}
		
		//page 7 anim
		if (top > 5*wHeight) {
			var posY = Math.max(-950,Math.round(0.3*((6*wHeight)-top)));
			$('body').css('background-position','center '+posY+'px');
		}
		
		if (top < $('.page.selected').offset().top-wHeight/2) {
			var index = $('.page.selected').index();
			$('.page').removeClass('selected');
			$('.page').eq(Math.max(0,index-1)).addClass('selected');
		} else if (top > $('.page.selected').offset().top + wHeight/2) {
			var index = $('.page.selected').index();
			$('.page').removeClass('selected');
			$('.page').eq(Math.min($('.page').length-1,index+1)).addClass('selected');
		}
	});
	
	//keyboard nav
	$(document).bind('keydown',function(e) {
		switch(e.keyCode) {
			case 32: //space
				e.preventDefault();
				pageTurn('next');
				break;
			case 37: //left
				if ($('.page.selected').hasClass('page2') || $('.page.selected').hasClass('page5')) {
					e.preventDefault();
					imageChange('prev');
				}
				break;
			case 38: //up
				e.preventDefault();
				pageTurn('prev');
				break;
			case 39: //right
				if ($('.page.selected').hasClass('page2') || $('.page.selected').hasClass('page5')) {
					e.preventDefault();
					imageChange('next');
				}
				break;
			case 40: //down
				e.preventDefault();
				pageTurn('next');
				break;
		}
	});

	
});
