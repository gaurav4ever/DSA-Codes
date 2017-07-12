<!DOCTYPE html>
<!-- saved from url=(0052)https://www.hackerrank.com/challenges/new-year-chaos -->
<html lang="en" class=" mod_js mod_flexbox mod_flexboxlegacy mod_canvas mod_canvastext mod_webgl mod_no-touch mod_geolocation mod_history mod_draganddrop mod_rgba mod_hsla mod_multiplebgs mod_backgroundsize mod_borderimage mod_borderradius mod_boxshadow mod_textshadow mod_opacity mod_cssanimations mod_csscolumns mod_cssgradients mod_cssreflections mod_csstransforms mod_csstransforms3d mod_csstransitions mod_fontface mod_generatedcontent mod_video mod_audio mod_applicationcache mod_svg mod_inlinesvg mod_smil mod_svgclippaths mod_csscalc mod_fullscreen mod_cssresize mod_no-ie8compat"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    <script type="text/javascript" async="" src="./New Year Chaos _files/BizibleAcct.js"></script><script id="twitter-wjs" src="./New Year Chaos _files/widgets.js"></script><script id="facebook-jssdk" src="./New Year Chaos _files/sdk.js"></script><script type="text/javascript" async="" src="./New Year Chaos _files/insight.min.js"></script><script src="./New Year Chaos _files/bizible.js"></script><script async="" src="./New Year Chaos _files/fbds.js"></script><script type="text/javascript" async="" src="./New Year Chaos _files/filepicker.js"></script><script type="text/javascript" async="" src="./New Year Chaos _files/mixpanel-2.2.min.js"></script><script type="text/javascript" async="" src="./New Year Chaos _files/ga.js"></script><script src="./New Year Chaos _files/50b78854cb2e10773a00002d.js" async=""></script><script type="text/javascript">
        function set_manifest(manifest) {
            HR.MANIFEST = manifest;
        }
    </script>
    <script type="text/javascript">
  window.PRODUCT_NAMESPACE = 'hackerrank'
  window.APP_METRIC_TRACKING_ENABLED = false
  if (window.PRODUCT_NAMESPACE == 'hackerrank' && (Math.floor(Math.random() * 10) + 1) == 5) {
    window.APP_METRIC_TRACKING_ENABLED = true
  }
   window.PERF_METRICS = {
    tracked_initial_view_load_tti: {},
    tracked_view_load_tti: {}
  }
</script>
<!-- jsCookies -->
<script type="text/javascript">
  if("undefined"==typeof jsCookies)var jsCookies={get:function(c_name){if(document.cookie.length>0){var c_start=document.cookie.indexOf(c_name+"=");if(-1!=c_start){c_start=c_start+c_name.length+1;var c_end=document.cookie.indexOf(";",c_start);return-1==c_end&&(c_end=document.cookie.length),unescape(document.cookie.substring(c_start,c_end))}}return""},set:function(c_name,value,expiredays,expirehours,expiremins,expiresecs){var exdate=new Date;exdate.setDate(exdate.getDate()+(expiredays||0)),exdate.setHours(exdate.getHours()+(expirehours||0)),exdate.setMinutes(exdate.getMinutes()+(expiremins||0)),exdate.setSeconds(exdate.getSeconds()+(expiresecs||0));var set_expire_time=!(null==expiredays&&null==expiresecs&&null==expiremins&&null==expirehours);document.cookie=c_name+"="+escape(value)+"; path=/"+(0==set_expire_time?"":"; expires="+exdate.toUTCString())},check:function(c_name){return c_name=jsCookies.get(c_name),null!=c_name&&""!=c_name?!0:!1},destroy:function(c_name){var exdate=new Date;document.cookie=c_name+"=''; path=/; expires="+exdate.toUTCString()}};
</script>

<script type="text/javascript">
  !function(){function getRandRange(min,max){return parseInt(Math.random()*(max-min))+min}function getRandChar(){var offset=getRandRange(0,35);return offset>25?(offset-26).toString():String.fromCharCode(97+offset)}function makeId(length){for(var text="",i=0;length>i;i++)text+=getRandChar();return text}function setSessionId(){key="session_id";var session_key=jsCookies.get(key);session_key?jsCookies.set(key,session_key,null,2):(epoch=(new Date).getTime(),rand_id=makeId(8),jsCookies.set(key,rand_id+"-"+epoch.toString(),null,2)),setTimeout(setSessionId,6e4)}setSessionId()}();
</script>

<!-- CDN Failsafe -->
<script type="text/javascript">!function(window){function sendRequest(url,callback,postData,error_callback){var req=createXMLHTTPObject();req&&(req.open("GET",url,!0),req.onreadystatechange=function(){return 4==req.readyState?200!=req.status&&304!=req.status?void error_callback(req):void callback(req):void 0},4!=req.readyState&&req.send(postData))}function createXMLHTTPObject(){for(var xmlhttp=!1,i=0;i<XMLHttpFactories.length;i++){try{xmlhttp=XMLHttpFactories[i]()}catch(e){continue}break}return xmlhttp}function set_CDN_URL(url){url===default_cdn&&null!=reload_timer&&clearTimeout(reload_timer),jsCookies.get("cdn_url")||(url!=default_cdn?cookieTimer=setTimeout(function(){jsCookies.set("cdn_url",url,0,1),reload_page(5e3)},250):(cookieTimer&&(clearTimeout(cookieTimer),cookieTimer=null),jsCookies.set("cdn_url",url,0,1)))}function reload_page(reload_interval){reload_timer=setTimeout(function(){jsCookies.set("cdn_url_switched","true",0,0,15),window.document.location.reload()},reload_interval)}function CDNBench(url){this.url=url,this.rateCDN=function(){var url=this.url,timestamp=(new Date).getTime(),success_callback=function(req){set_CDN_URL(url),console.log("timetaken for "+url+" is "+((new Date).getTime()-timestamp)+" milliseconds")},error_callback=function(req){console.log("unable to reach "+url)};sendRequest("https://"+url+"/lib/checkcdn.json?_="+Math.floor(Math.random()*Math.pow(10,15)),success_callback,null,error_callback)}}function rate_cdn(){for(var cdn_urls=["d3keuzeb2crhkn.cloudfront.net","hrcdn.net"],i=0;i<cdn_urls.length;i++)new CDNBench(cdn_urls[i]).rateCDN()}var XMLHttpFactories=[function(){return new XMLHttpRequest},function(){return new ActiveXObject("Msxml2.XMLHTTP")},function(){return new ActiveXObject("Msxml3.XMLHTTP")},function(){return new ActiveXObject("Microsoft.XMLHTTP")}];jsCookies=window.jsCookies;var default_cdn="d3keuzeb2crhkn.cloudfront.net",cookieTimer=null,reload_timer=null;jsCookies.get("cdn_url")||rate_cdn()}(window);</script>

<!-- DNS Prefetch -->
<link rel="dns-prefetch" href="https://hrcdn.net/">
<link rel="dns-prefetch" href="https://d3keuzeb2crhkn.cloudfront.net/">
<link rel="dns-prefetch" href="https://notifications.hackerrank.com/">
<link rel="dns-prefetch" href="https://api.mixpanel.com/">
<link rel="dns-prefetch" href="https://heapanalytics.com/">
<link rel="dns-prefetch" href="https://metrics.hackerrank.com/">

<!-- use the latest IE browser -->
<meta http-equiv="X-UA-Compatible" content="IE=Edge">

<!-- App Icon for iOS Devices -->
<link rel="apple-touch-icon-precomposed" href="https://d3keuzeb2crhkn.cloudfront.net/hackerrank/assets/apple-touch-icon-precomposed-3c61638b736d2fe92e834070461c49f6.png">

<!-- favicon -->
<link href="https://d3keuzeb2crhkn.cloudfront.net/hackerrank/assets/favicon-13e86bc31933fb0accdbd817adbc12c0.ico" rel="shortcut icon" type="image/vnd.microsoft.icon">

<!-- generating meta tags -->


<meta name="description" content="Join over 1 million developers in solving code challenges on HackerRank, one of the best ways to prepare for programming interviews.">
<meta property="og:title" content="HackerRank">
<meta property="og:image" content="https://hrcdn.net/og/default.jpg">
<meta property="og:description" content="Join over 1 million developers in solving code challenges on HackerRank, one of the best ways to prepare for programming interviews.">
<meta property="og:url" content="https://www.hackerrank.com/">
<meta property="og:site_name" content="HackerRank">
<meta property="og:type" content="website">
<meta property="article:author" content="https://www.facebook.com/hackerrank">
<meta name="twitter:card" content="summary">
<meta name="twitter:site" content="@hackerrank">
<meta name="twitter:url" content="https://www.hackerrank.com">
<meta name="twitter:title" content="HackerRank">
<meta property="fb:app_id" content="347499128655783">

<!-- ends meta tags generation -->

<!-- CSRF Token -->
<meta content="authenticity_token" name="csrf-param">
<meta content="2zePDn/TUQwUkgGrRB/Xag0t6Lc+ODvoK2ehiBsbBVU=" name="csrf-token">

  <link href="./New Year Chaos _files/hackerrank_libraries-2095719570816357e8f0d455367f65a1.css" media="all" rel="stylesheet">
  <link href="./New Year Chaos _files/hackerrank-core-4c74a560d5de418efc18561a71c753d0.css" media="all" rel="stylesheet">
  <link href="./New Year Chaos _files/dashboard-7991720a06883d18eb0302368a2eb924.css" media="all" rel="stylesheet">

<!-- Google Analyitics Init -->
<script type="text/javascript">
    var _gaq = _gaq || [];
    _gaq.push(['_setAccount', "UA-45092266-1"]);
    _gaq.push(['_trackPageview']);
    _gaq.push(['_setCampSourceKey', 'utm_source']);
    _gaq.push(['_setCampMediumKey', 'utm_medium']);
    _gaq.push(['_setCampContentKey', 'utm_keyword']);
    _gaq.push(['_setCampTermKey', 'utm_keyword']);
    _gaq.push(['_setCampNameKey', 'utm_campaign']);
</script><style type="text/css"></style>

<!-- Totango init -->
<script>
    totango = null;
</script>

<!-- Mixpanel Init -->
<script type="text/javascript">
    var mixpanel = mixpanel || [];
</script>

<!-- Heap Analytics Init -->
<script type="text/javascript">
    var heap = heap || [];
</script>

<script type="text/javascript">
  (function(h) {
    window.hr_metrics = h;
    if (!h.loaded) {
      var a = ['track', 'batch_track', 'app_track', 'externalService', 'init', 'batch_track_record', 'track_dwell_time', 'set_navigation_data'];
      for (var i = 0; i < a.length; i++) {
        if (!h[a[i]]) {h[a[i]] = function() {};}
      }
    }
  })(window.hr_metrics || {});
</script>

<script type="text/javascript">
    /**
     * Protect window.console method calls, e.g. console is not defined on IE
     * unless dev tools are open, and IE doesn't define console.debug
     */
(function() {
    if (!window.console) {
      window.console = {};
    }
    var m = ["log", "info", "warn", "error", "debug", "trace", "dir", "group", "groupCollapsed", "groupEnd", "time", "timeEnd", "profile", "profileEnd", "dirxml", "assert", "count", "markTimeline", "timeStamp", "clear"];
    // define undefined methods as noops to prevent errors
    for (var i = 0; i < m.length; i++) {
        if (!window.console[m[i]]) {
            window.console[m[i]] = function() {};
        }
    }
})();
</script>


<!-- Errorception -->

    <script type="text/javascript">
    (function(_,e,rr,s){_errs=[s];var c=_.onerror;_.onerror=function(){var a=arguments;_errs.push(a);
     c&&c.apply(this,a)};var b=function(){var c=e.createElement(rr),b=e.getElementsByTagName(rr)[0];
     c.src="//beacon.errorception.com/"+s+".js";c.async=!0;b.parentNode.insertBefore(c,b)};
     _.addEventListener?_.addEventListener("load",b,!1):_.attachEvent("onload",b)})
     (window,document,"script","50b78854cb2e10773a00002d");

     _errs.meta = {
         handle: 'gaurav4ever',
         loadTimestamp: 1466432358,
         assetUrl: 'https://d3keuzeb2crhkn.cloudfront.net',
         cdnUrl: 'd3keuzeb2crhkn.cloudfront.net'
     };
     _errs.allow = function (err) {
         if (err.message.indexOf("CustomPhantomJsError") !== -1){
            return false;
         }

         if (err.message === "Uncaught TypeError: Cannot read property 'frames' of undefined" &&
             err.line === 206 &&
             err.stack &&
             err.stack.indexOf("TeXTheWorld") !== -1) {
                 return false;
         }
         return true;
     }
     </script>

  <script type="text/javascript">
    var pusher_app_key = '31902f926540a4ddc81d';
  </script>

    <!-- General Information -->
    <title>New Year Chaos : Challenge | Implementation | Algorithms | HackerRank</title>
    <script type="text/javascript" charset="utf-8" async="" data-requirecontext="_" data-requiremodule="https://d3keuzeb2crhkn.cloudfront.net/hackerrank/assets/compound/extra-views-d22f2681efeac290f969c967fba4b7a2.js" src="./New Year Chaos _files/extra-views-d22f2681efeac290f969c967fba4b7a2.js"></script><script type="text/javascript" charset="utf-8" async="" data-requirecontext="_" data-requiremodule="https://d3keuzeb2crhkn.cloudfront.net/hackerrank/assets/compound/challenge-views-65063a03a854b894ac2793cd1711a12e.js" src="./New Year Chaos _files/challenge-views-65063a03a854b894ac2793cd1711a12e.js"></script><script type="text/javascript" charset="utf-8" async="" data-requirecontext="_" data-requiremodule="https://d3keuzeb2crhkn.cloudfront.net/hackerrank/assets/codemirror_basic-3a83850783685744d1a80b6f7f6568d5.js" src="./New Year Chaos _files/codemirror_basic-3a83850783685744d1a80b6f7f6568d5.js"></script><script type="text/javascript" charset="utf-8" async="" data-requirecontext="_" data-requiremodule="https://d3keuzeb2crhkn.cloudfront.net/hackerrank/assets/codemirror/mode/clike/clike-33fa7bfa1edcb19dd02f136f4e9d6144.js" src="./New Year Chaos _files/clike-33fa7bfa1edcb19dd02f136f4e9d6144.js"></script><script type="text/javascript" charset="utf-8" async="" data-requirecontext="_" data-requiremodule="https://d3keuzeb2crhkn.cloudfront.net/hackerrank/assets/compound/game-views-45f56becdb584da834ef9317c9a6ef5a.js" src="./New Year Chaos _files/game-views-45f56becdb584da834ef9317c9a6ef5a.js"></script><script type="text/javascript" charset="utf-8" async="" data-requirecontext="_" data-requiremodule="https://d3keuzeb2crhkn.cloudfront.net/hackerrank/assets/compound/websocket-libraries-ce8edf09313f308c2285d42bf790b63a.js" src="./New Year Chaos _files/websocket-libraries-ce8edf09313f308c2285d42bf790b63a.js"></script><!--<base href="https://www.hackerrank.com/">--><base href=".">

    <script type="text/javascript">
      var HR;
      HR = window.HR || {};
      HR.PREFETCH_DATA = {"metadata":{"asset_path":"https://d3keuzeb2crhkn.cloudfront.net/hackerrank/assets","filepicker_key":"ApehXMbvXTWqWab7OmMr9z","pubsub_host":"https://pubsub.hackerrank.com","landing_contest_slug":"master","current_contest_namespace":"","using_contest_namespace":false},"slugs":{"master":{"type":"contest"},"gaurav4ever":{"type":"hacker"}},"contest":{"id":1,"name":"Master","slug":"master","created_at":"2012-07-19T17:13:20.000Z","updated_at":"2016-05-06T21:20:13.000Z","starttime":null,"endtime":null,"timezone":"America/Los_Angeles","homepage":"","tagline":"","description":"","homepage_background_color":"","notification":null,"template_id":454,"expose_stats":null,"public":false,"team_event":false,"rating_category":null,"is_rating_updated":false,"leaderboard_backend":null,"leaderboard_format":"","primary_track_id":null,"college_public":false,"rated":false,"is_multi_round":false,"parent_contest_id":null,"started":true,"ended":false,"epoch_endtime":0,"epoch_starttime":0,"time_left":null,"hide_difficulty":null,"has_tracks":true,"archived":false,"leaderboard_type":"country","kind":"","leaderboard_freeze_time":null,"show_penalty":false,"track":null,"hide_navigation":null,"contest_broadcast":null,"hide_leaderboard":null,"hide_submissions":null,"leaderboard_out_of_sync":null,"leaderboard_out_of_sync_message":null,"challenges_count":null,"show_participants_info":null,"custom_leaderboard_column_name":null,"disable_forum":false,"disable_fsi":null,"has_codesprint_reg_page":null,"hidden":null,"comment_live_sync":null,"company_associated_contest":null,"limited_participants":null,"leaderboard_broadcast_message":null,"qualification_rule_type":null,"qualification_rule_value":0,"qualification_rule_msg":null,"migration_status":null,"migration_disabled":null,"testers_contest":null,"categories":[{"id":24,"name":"Tutorials","slug":"tutorials","hacker_progress":null,"children":[{"id":"24-146","name":"30 Days of Code","slug":"30-days-of-code","priority":5,"order_challenge_by":1}]},{"id":3,"name":"Algorithms","slug":"algorithms","hacker_progress":null,"children":[{"id":"3-43","name":"Warmup","slug":"warmup","priority":22,"order_challenge_by":1},{"id":"3-108","name":"Implementation","slug":"implementation","priority":21,"order_challenge_by":1},{"id":"3-34","name":"Strings","slug":"strings","priority":20,"order_challenge_by":1},{"id":"3-38","name":"Sorting","slug":"arrays-and-sorting","priority":20,"order_challenge_by":1},{"id":"3-36","name":"Search","slug":"search","priority":19,"order_challenge_by":1},{"id":"3-33","name":"Graph Theory","slug":"graph-theory","priority":17,"order_challenge_by":1},{"id":"3-59","name":"Greedy","slug":"greedy","priority":16,"order_challenge_by":1},{"id":"3-35","name":"Dynamic Programming","slug":"dynamic-programming","priority":15,"order_challenge_by":1},{"id":"3-30","name":"Bit Manipulation","slug":"bit-manipulation","priority":14,"order_challenge_by":1},{"id":"3-47","name":"Game Theory","slug":"game-theory","priority":7,"order_challenge_by":1},{"id":"3-29","name":"NP Complete","slug":"np-complete-problems","priority":6,"order_challenge_by":1}]},{"id":17,"name":"Data Structures","slug":"data-structures","hacker_progress":null,"children":[{"id":"17-134","name":"Arrays","slug":"arrays","priority":11,"order_challenge_by":1},{"id":"17-39","name":"Linked Lists","slug":"linked-lists","priority":10,"order_challenge_by":1},{"id":"17-96","name":"Trees","slug":"trees","priority":9,"order_challenge_by":1},{"id":"17-119","name":"Balanced Trees","slug":"balanced-trees","priority":7,"order_challenge_by":1},{"id":"17-97","name":"Stacks","slug":"stacks","priority":2,"order_challenge_by":1},{"id":"17-98","name":"Queues","slug":"queues","priority":2,"order_challenge_by":1},{"id":"17-99","name":"Heap","slug":"heap","priority":2,"order_challenge_by":1},{"id":"17-100","name":"Disjoint Set","slug":"disjoint-set","priority":2,"order_challenge_by":1},{"id":"17-113","name":"Multiple Choice","slug":"multiple-choice","priority":1,"order_challenge_by":1},{"id":"17-118","name":"Trie","slug":"trie","priority":1,"order_challenge_by":1},{"id":"17-32","name":"Advanced","slug":"data-structures","priority":0,"order_challenge_by":1}]},{"id":22,"name":"Mathematics","slug":"mathematics","hacker_progress":null,"children":[{"id":"22-109","name":"Fundamentals","slug":"fundamentals","priority":21,"order_challenge_by":1},{"id":"22-52","name":"Number Theory","slug":"number-theory","priority":12,"order_challenge_by":1},{"id":"22-51","name":"Combinatorics","slug":"combinatorics","priority":11,"order_challenge_by":1},{"id":"22-55","name":"Algebra","slug":"algebra","priority":10,"order_challenge_by":1},{"id":"22-54","name":"Geometry","slug":"geometry","priority":9,"order_challenge_by":1},{"id":"22-53","name":"Probability","slug":"probability","priority":8,"order_challenge_by":1},{"id":"22-128","name":"Linear Algebra Foundations","slug":"linear-algebra-foundations","priority":0,"order_challenge_by":1}]},{"id":2,"name":"Artificial Intelligence","slug":"ai","hacker_progress":null,"children":[{"id":"2-8","name":"Bot Building","slug":"ai-introduction","priority":7,"order_challenge_by":1},{"id":"2-9","name":"A* Search","slug":"astar-search","priority":6,"order_challenge_by":1},{"id":"2-10","name":"Alpha Beta Pruning","slug":"alpha-beta-pruning","priority":5,"order_challenge_by":1},{"id":"2-14","name":"Combinatorial Search","slug":"combinatorial-search-theory","priority":4,"order_challenge_by":1},{"id":"2-13","name":"Games","slug":"richman-games","priority":3,"order_challenge_by":1},{"id":"2-11","name":"Statistics and Machine Learning","slug":"machine-learning","priority":1,"order_challenge_by":1},{"id":"2-44","name":"Digital Image Analysis","slug":"image-analysis","priority":0,"order_challenge_by":1},{"id":"2-49","name":"Natural Language Processing","slug":"nlp","priority":0,"order_challenge_by":1},{"id":"2-129","name":"Probability \u0026 Statistics - Foundations","slug":"statistics-foundations","priority":0,"order_challenge_by":1}]},{"id":13,"name":"C++","slug":"cpp","hacker_progress":null,"children":[{"id":"13-77","name":"Introduction","slug":"cpp-introduction","priority":100,"order_challenge_by":1},{"id":"13-76","name":"Strings","slug":"cpp-strings","priority":99,"order_challenge_by":1},{"id":"13-78","name":"Classes","slug":"classes","priority":98,"order_challenge_by":1},{"id":"13-116","name":"STL","slug":"stl","priority":97,"order_challenge_by":1},{"id":"13-127","name":"Inheritance","slug":"inheritance","priority":96,"order_challenge_by":1}]},{"id":15,"name":"Java","slug":"java","hacker_progress":null,"children":[{"id":"15-80","name":"Introduction","slug":"java-introduction","priority":0,"order_challenge_by":1},{"id":"15-82","name":"Strings","slug":"java-strings","priority":0,"order_challenge_by":1},{"id":"15-83","name":"BigNumber","slug":"bignumber","priority":0,"order_challenge_by":1},{"id":"15-84","name":"Data Structure","slug":"java-data-structure","priority":0,"order_challenge_by":1},{"id":"15-85","name":"Object Oriented Programming","slug":"oop","priority":0,"order_challenge_by":1},{"id":"15-106","name":"Exception Handling","slug":"handling-exceptions","priority":0,"order_challenge_by":1},{"id":"15-136","name":"Advanced","slug":"java-advanced","priority":0,"order_challenge_by":1}]},{"id":12,"name":"Python","slug":"python","hacker_progress":null,"children":[{"id":"12-73","name":"Introduction","slug":"py-introduction","priority":10,"order_challenge_by":1},{"id":"12-74","name":"Data Types","slug":"data-types","priority":9,"order_challenge_by":1},{"id":"12-75","name":"Strings","slug":"py-strings","priority":8,"order_challenge_by":1},{"id":"12-120","name":"Sets","slug":"py-sets","priority":7,"order_challenge_by":1},{"id":"12-121","name":"Math","slug":"py-math","priority":7,"order_challenge_by":1},{"id":"12-122","name":"Itertools","slug":"py-itertools","priority":7,"order_challenge_by":1},{"id":"12-123","name":"Collections","slug":"py-collections","priority":7,"order_challenge_by":1},{"id":"12-124","name":"Date and Time","slug":"py-date-time","priority":7,"order_challenge_by":1},{"id":"12-125","name":"Built-Ins","slug":"py-built-ins","priority":7,"order_challenge_by":1},{"id":"12-126","name":"Errors and Exceptions","slug":"errors-exceptions","priority":7,"order_challenge_by":1},{"id":"12-42","name":"Classes","slug":"py-classes","priority":6,"order_challenge_by":1},{"id":"12-87","name":"Python Functionals","slug":"py-functionals","priority":1,"order_challenge_by":1},{"id":"12-88","name":"Regex and Parsing","slug":"py-regex","priority":1,"order_challenge_by":1},{"id":"12-89","name":"XML","slug":"xml","priority":1,"order_challenge_by":1},{"id":"12-90","name":"Closures and Decorators","slug":"closures-and-decorators","priority":1,"order_challenge_by":1},{"id":"12-139","name":"Numpy","slug":"numpy","priority":0,"order_challenge_by":1}]},{"id":14,"name":"Ruby","slug":"ruby","hacker_progress":null,"children":[{"id":"14-72","name":"Introduction","slug":"ruby-tutorials","priority":10,"order_challenge_by":1},{"id":"14-86","name":"Control Structures","slug":"control-structures","priority":9,"order_challenge_by":1},{"id":"14-79","name":"Arrays \u0026 Hashes","slug":"ruby-arrays","priority":8,"order_challenge_by":1},{"id":"14-107","name":"Enumerables","slug":"ruby-enumerables","priority":7,"order_challenge_by":1},{"id":"14-112","name":"Methods","slug":"ruby-methods","priority":6,"order_challenge_by":1},{"id":"14-135","name":"Ruby Strings","slug":"ruby-strings","priority":5,"order_challenge_by":1}]},{"id":18,"name":"SQL","slug":"sql","hacker_progress":null,"children":[{"id":"18-92","name":"Basic Select","slug":"select","priority":10,"order_challenge_by":1},{"id":"18-132","name":"Advanced Select","slug":"advanced-select","priority":9,"order_challenge_by":1},{"id":"18-95","name":"Aggregation","slug":"aggregation","priority":8,"order_challenge_by":1},{"id":"18-94","name":"Basic Join","slug":"join","priority":6,"order_challenge_by":1},{"id":"18-133","name":"Advanced Join","slug":"advanced-join","priority":4,"order_challenge_by":1},{"id":"18-143","name":"Alternative Queries","slug":"alternative-queries","priority":2,"order_challenge_by":1}]},{"id":16,"name":"Databases","slug":"databases","hacker_progress":null,"children":[{"id":"16-91","name":"Relational Algebra","slug":"relational-algebra","priority":2,"order_challenge_by":1},{"id":"16-93","name":"Indexes","slug":"indexes","priority":1,"order_challenge_by":1},{"id":"16-117","name":"OLAP","slug":"olap","priority":1,"order_challenge_by":1},{"id":"16-101","name":"Set and Algebra","slug":"set-and-algebra","priority":0,"order_challenge_by":1},{"id":"16-130","name":"NoSQL - XML, MapReduce","slug":"xpath-queries","priority":0,"order_challenge_by":1},{"id":"16-131","name":"Database Normalization","slug":"database-normalization","priority":0,"order_challenge_by":1}]},{"id":21,"name":"Distributed Systems","slug":"distributed-systems","hacker_progress":null,"children":[{"id":"21-103","name":"Multiple Choice","slug":"distributed-mcq","priority":2,"order_challenge_by":1},{"id":"21-104","name":"Client Server","slug":"client-server","priority":1,"order_challenge_by":1},{"id":"21-111","name":"MapReduce Basics","slug":"mapreduce-basics","priority":1,"order_challenge_by":1}]},{"id":6,"name":"Linux Shell","slug":"shell","hacker_progress":null,"children":[{"id":"6-56","name":"Bash","slug":"bash","priority":0,"order_challenge_by":1},{"id":"6-57","name":"Text Processing","slug":"textpro","priority":0,"order_challenge_by":1},{"id":"6-114","name":"Arrays in Bash","slug":"arrays-in-bash","priority":0,"order_challenge_by":1},{"id":"6-115","name":"Grep Sed Awk","slug":"grep-sed-awk","priority":0,"order_challenge_by":1}]},{"id":5,"name":"Functional Programming","slug":"fp","hacker_progress":null,"children":[{"id":"5-27","name":"Introduction","slug":"intro","priority":80,"order_challenge_by":1},{"id":"5-26","name":"Recursion","slug":"recursion","priority":70,"order_challenge_by":1},{"id":"5-45","name":"Functional Structures","slug":"ds","priority":60,"order_challenge_by":1},{"id":"5-40","name":"Memoization and DP","slug":"dp","priority":50,"order_challenge_by":1},{"id":"5-50","name":"Persistent Structures","slug":"persistent-ds","priority":40,"order_challenge_by":1},{"id":"5-41","name":"Ad Hoc","slug":"misc","priority":30,"order_challenge_by":1},{"id":"5-46","name":"Parsers","slug":"parsers","priority":20,"order_challenge_by":1},{"id":"5-48","name":"Interpreter and Compilers","slug":"compilers","priority":10,"order_challenge_by":1}]},{"id":19,"name":"Regex","slug":"regex","hacker_progress":null,"children":[{"id":"19-137","name":"Introduction","slug":"re-introduction","priority":6,"order_challenge_by":1},{"id":"19-141","name":"Character Class","slug":"re-character-class","priority":5,"order_challenge_by":1},{"id":"19-142","name":"Repetitions","slug":"re-repetitions","priority":4,"order_challenge_by":1},{"id":"19-140","name":"Grouping and Capturing","slug":"grouping-and-capturing","priority":3,"order_challenge_by":1},{"id":"19-144","name":"Backreferences","slug":"backreferences","priority":2,"order_challenge_by":1},{"id":"19-145","name":"Assertions","slug":"assertions","priority":1,"order_challenge_by":1},{"id":"19-138","name":"Applications","slug":"re-applications","priority":0,"order_challenge_by":1}]},{"id":20,"name":"Security","slug":"security","hacker_progress":null,"children":[{"id":"20-102","name":"Functions","slug":"functions","priority":100,"order_challenge_by":1},{"id":"20-105","name":"Terminology and Concepts","slug":"concepts","priority":99,"order_challenge_by":1},{"id":"20-31","name":"Cryptography","slug":"cryptography","priority":5,"order_challenge_by":1}]}],"primary_tags":[{"id":49,"slug":"np-complete-problems","name":"NP Complete problems","is_track":true,"weightage":12.0},{"id":57,"slug":"normal-languages","name":"Normal Languages","is_track":false,"weightage":0.0},{"id":8,"slug":"combinatorial-search-theory","name":"Combinatorial Search Theory","is_track":true,"weightage":3.0},{"id":9,"slug":"richman-games","name":"Richman Games","is_track":true,"weightage":4.0},{"id":14,"slug":"bit-manipulation","name":"Bit Manipulation","is_track":true,"weightage":10.0},{"id":7,"slug":"search","name":"Search","is_track":true,"weightage":2.0},{"id":6,"slug":"sorting","name":"Sorting","is_track":true,"weightage":1.0},{"id":10,"slug":"dynamic-programming","name":"Dynamic Programming","is_track":true,"weightage":6.0},{"id":11,"slug":"graph-theory","name":"Graph Theory","is_track":true,"weightage":7.0},{"id":12,"slug":"strings","name":"Strings","is_track":true,"weightage":8.0},{"id":58,"slug":"esoteric-languages","name":"Esoteric Languages","is_track":true,"weightage":0.0},{"id":13,"slug":"maths","name":"Math","is_track":true,"weightage":9.0}]},"messages":[{"id":16059,"participants":"316874-464389","last_message":{"id":187972,"sender_id":316874,"receiver_id":464389,"message":"\u003ca href=\"https://github.com/gaurav4ever/Hackerrank-Solutions\"\u003ehttps://github.com/gaurav4ever/Hackerrank-Solutions\u003c/a\u003e","message_thread_id":16059,"created_at":"2016-06-13T12:09:36.000Z","updated_at":"2016-06-13T12:09:36.000Z","status":0},"user1":{"id":316874,"username":"gaurav4ever","avatar":"https://hr-avatars.s3.amazonaws.com/6f3e59c8-162a-4ac6-a35a-6257aa7c85b3/150x150.png"},"user2":{"id":464389,"username":"rohitkavisheti","avatar":"https://hr-avatars.s3.amazonaws.com/bcd161a2-31a9-4a1c-b765-e4aa6fa37ddc/150x150.png"},"unread_count":0},{"id":20971,"participants":"316874-526040","last_message":{"id":187971,"sender_id":316874,"receiver_id":526040,"message":"\u003ca href=\"https://github.com/gaurav4ever/Hackerrank-Solutions\"\u003ehttps://github.com/gaurav4ever/Hackerrank-Solutions\u003c/a\u003e","message_thread_id":20971,"created_at":"2016-06-13T12:09:24.000Z","updated_at":"2016-06-13T12:09:24.000Z","status":0},"user1":{"id":316874,"username":"gaurav4ever","avatar":"https://hr-avatars.s3.amazonaws.com/6f3e59c8-162a-4ac6-a35a-6257aa7c85b3/150x150.png"},"user2":{"id":526040,"username":"venkadesh","avatar":"https://hr-avatars.s3.amazonaws.com/55eaed84-49b0-4ffc-9e19-4e74d69f1074/150x150.png"},"unread_count":0},{"id":23301,"participants":"316874-748602","last_message":{"id":187970,"sender_id":316874,"receiver_id":748602,"message":"\u003ca href=\"https://github.com/gaurav4ever/Hackerrank-Solutions\"\u003ehttps://github.com/gaurav4ever/Hackerrank-Solutions\u003c/a\u003e","message_thread_id":23301,"created_at":"2016-06-13T12:09:20.000Z","updated_at":"2016-06-13T12:09:20.000Z","status":0},"user1":{"id":316874,"username":"gaurav4ever","avatar":"https://hr-avatars.s3.amazonaws.com/6f3e59c8-162a-4ac6-a35a-6257aa7c85b3/150x150.png"},"user2":{"id":748602,"username":"palaksona","avatar":"https://d3rpyts3de3lx8.cloudfront.net/hackerrank/assets/gravatar.jpg"},"unread_count":0},{"id":23028,"participants":"316874-669391","last_message":{"id":187969,"sender_id":316874,"receiver_id":669391,"message":"\u003ca href=\"https://github.com/gaurav4ever/Hackerrank-Solutions\"\u003ehttps://github.com/gaurav4ever/Hackerrank-Solutions\u003c/a\u003e","message_thread_id":23028,"created_at":"2016-06-13T12:09:14.000Z","updated_at":"2016-06-13T12:09:14.000Z","status":0},"user1":{"id":316874,"username":"gaurav4ever","avatar":"https://hr-avatars.s3.amazonaws.com/6f3e59c8-162a-4ac6-a35a-6257aa7c85b3/150x150.png"},"user2":{"id":669391,"username":"KetakiV","avatar":"https://d3rpyts3de3lx8.cloudfront.net/hackerrank/assets/gravatar.jpg"},"unread_count":0},{"id":23067,"participants":"316874-746836","last_message":{"id":187968,"sender_id":316874,"receiver_id":746836,"message":"\u003ca href=\"https://github.com/gaurav4ever/Hackerrank-Solutions\"\u003ehttps://github.com/gaurav4ever/Hackerrank-Solutions\u003c/a\u003e","message_thread_id":23067,"created_at":"2016-06-13T12:09:02.000Z","updated_at":"2016-06-13T12:09:02.000Z","status":0},"user1":{"id":316874,"username":"gaurav4ever","avatar":"https://hr-avatars.s3.amazonaws.com/6f3e59c8-162a-4ac6-a35a-6257aa7c85b3/150x150.png"},"user2":{"id":746836,"username":"Saurabh_5","avatar":"https://hr-avatars.s3.amazonaws.com/1c0a5855-335e-49e9-8a12-769678b25f8e/150x150.png"},"unread_count":0},{"id":37773,"participants":"316874-404775","last_message":{"id":187967,"sender_id":316874,"receiver_id":404775,"message":"\u003ca href=\"https://github.com/gaurav4ever/Hackerrank-Solutions\"\u003ehttps://github.com/gaurav4ever/Hackerrank-Solutions\u003c/a\u003e","message_thread_id":37773,"created_at":"2016-06-13T12:08:55.000Z","updated_at":"2016-06-13T14:33:11.000Z","status":1},"user1":{"id":316874,"username":"gaurav4ever","avatar":"https://hr-avatars.s3.amazonaws.com/6f3e59c8-162a-4ac6-a35a-6257aa7c85b3/150x150.png"},"user2":{"id":404775,"username":"pradhyuman","avatar":"https://hr-avatars.s3.amazonaws.com/a87fc15f-a418-4dab-84f5-deb1f247cee5/150x150.png"},"unread_count":0},{"id":14174,"participants":"316874-489780","last_message":{"id":98573,"sender_id":316874,"receiver_id":489780,"message":"okiieeee....chal lagi re...me offline jara hu.... whatsapp kariyo .... bbyeee :*","message_thread_id":14174,"created_at":"2015-11-02T14:38:45.000Z","updated_at":"2015-11-03T14:55:11.000Z","status":1},"user1":{"id":316874,"username":"gaurav4ever","avatar":"https://hr-avatars.s3.amazonaws.com/6f3e59c8-162a-4ac6-a35a-6257aa7c85b3/150x150.png"},"user2":{"id":489780,"username":"Hazel_Grace","avatar":"https://hr-avatars.s3.amazonaws.com/dae8a273-eb7e-4c3c-ab92-622d17b759b2/150x150.png"},"unread_count":0},{"id":23317,"participants":"316874-383210","last_message":{"id":97398,"sender_id":316874,"receiver_id":383210,"message":"ka*","message_thread_id":23317,"created_at":"2015-10-30T00:31:49.000Z","updated_at":"2016-01-12T08:37:20.000Z","status":1},"user1":{"id":316874,"username":"gaurav4ever","avatar":"https://hr-avatars.s3.amazonaws.com/6f3e59c8-162a-4ac6-a35a-6257aa7c85b3/150x150.png"},"user2":{"id":383210,"username":"codeador","avatar":"https://d3rpyts3de3lx8.cloudfront.net/hackerrank/assets/gravatar.jpg"},"unread_count":0},{"id":13446,"participants":"311805-316874","last_message":{"id":77295,"sender_id":316874,"receiver_id":311805,"message":"#include \u0026lt;stdio.h\u0026gt;\n#include \u0026lt;string.h\u0026gt;\n#include \u0026lt;math.h\u0026gt;\n#include \u0026lt;stdlib.h\u0026gt;\nint main() \n{\n\tint i,len1,len2,counta[26]={0},countb[26]={0},del=0;\n\tchar a[10000]={0},b[10000]={0};\n\tscanf(\u0026quot;%s\u0026quot;,a);len1=strlen(a);\n\tscanf(\u0026quot;%s\u0026quot;,b);len2=strlen(b);  \n\tfor(i=0;i\u0026lt;len1;i++)\n\t{\n\t\tcounta[a[i]-\u0026#39;a\u0026#39;]++;\n\t}\n\tfor(i=0;i\u0026lt;len2;i++)\n\t{\n\t\tcountb[b[i]-\u0026#39;a\u0026#39;]++;\n\t}\n\tfor(i=0;i\u0026lt;26;i++)\n\t{\n\t\tdel+=abs(counta[i]-countb[i]);\n\t}\n\tprintf(\u0026quot;%d\u0026quot;,del);\n    return 0; \n}\n","message_thread_id":13446,"created_at":"2015-08-29T17:09:04.000Z","updated_at":"2015-09-11T00:29:44.000Z","status":1},"user1":{"id":316874,"username":"gaurav4ever","avatar":"https://hr-avatars.s3.amazonaws.com/6f3e59c8-162a-4ac6-a35a-6257aa7c85b3/150x150.png"},"user2":{"id":311805,"username":"premprakash1996","avatar":"https://hr-avatars.s3.amazonaws.com/b2e880b5-701b-48cd-a701-3f1f874f52ad/150x150.png"},"unread_count":0},{"id":11358,"participants":"316874-352012","last_message":{"id":77293,"sender_id":316874,"receiver_id":352012,"message":"ab dekh le ye bta dega ki kinne deletion krne hay","message_thread_id":11358,"created_at":"2015-08-29T16:58:44.000Z","updated_at":"2015-09-01T08:49:48.000Z","status":1},"user1":{"id":316874,"username":"gaurav4ever","avatar":"https://hr-avatars.s3.amazonaws.com/6f3e59c8-162a-4ac6-a35a-6257aa7c85b3/150x150.png"},"user2":{"id":352012,"username":"sid__3007","avatar":"https://hr-avatars.s3.amazonaws.com/36a7af6f-c16b-4b85-bae2-77d2b97442d3/150x150.png"},"unread_count":0}],"profile":{"id":316874,"username":"gaurav4ever","country":"India","school":"VIT, Vellore (Vellore Institute of Technology)","languages":null,"created_at":"2014-09-25T18:10:03.000Z","level":1,"email":"gauravsharma.mvp@gmail.com","fb_uid":null,"gh_uid":null,"li_uid":null,"is_admin":false,"is_support_admin":false,"avatar":"https://hr-avatars.s3.amazonaws.com/6f3e59c8-162a-4ac6-a35a-6257aa7c85b3/150x150.png","website":"","short_bio":"crazy cs geek","username_change_count":null,"name":"gaurav sharma","personal_first_name":"gaurav","personal_last_name":"sharma","company":"no","local_language":"English","has_avatar_url":true,"hide_account_checklist":null,"spam_user":null,"job_title":"","hacker_iq":108.41,"errors":{},"confirmed":true,"facebook_allow_opengraph":null,"tsize":"XL","is_migrated":false,"facebook_opengraph_access_available":null,"promised_login_time":null,"last_logout_feedback":null,"chat_enabled":true,"tour_done":true,"username_autoset":null,"key_prefix":"316874-f00d21016a4cffd7e9f4ad99c432f279c45c286e","notifications_url":"https://notifications.hackerrank.com/subscribe/316874-61b3fa46035943b4c886594cd953271d30acb742","resume_url":null,"phone":null,"phone_number":"+919087753739","blog_url":null,"github_url":null,"linkedin_url":null,"college_major":"computer","jobs_consent":"true","graduation_year":"2018","college_year":"Sophomore","college_majors":["Computer Science \u0026 Engineering"],"intro_screen_onboarding_done":null,"related_topics_tour_done":true,"company_challenge_breadcrumb_tour_done":true,"contest_reminders_banner_selected":null,"hometown":null,"employment_title":null,"employment_years":null,"college_roll_no":null,"college_semester":null,"college_course":null,"college_cgpa":null,"city":"Vellore","state":null,"username_change_max":2,"has_viewed_feed_page":true,"address":"","rewards_alpha_onboarding_done":null,"has_verified_phone_number":false,"country_of_residence":null,"has_seen_ch_full_screen_intro":null,"experience_status":null,"address_line2":null,"address_city":null,"address_state":null,"address_zip":null,"us_work_eligibility":null,"us_work_eligibility_2":null,"is_professional":null,"years_of_experience":null,"us_citizenship":null,"us_citizenship_2":null,"gender":null,"is_campus_rep":false,"hacko_amount":3838,"timezone":"Asia/Calcutta","secondary_emails":[]},"timestamp":1466432357,"tracks":{"ai":{"id":2,"name":"Artificial Intelligence","slug":"ai","priority":11,"descriptions":"Develop intelligent agents. Challenges related to bot-building, path planning, search techniques and Game Theory. Exercise your creativity in heuristic design.\n","rewards_system_enabled":null,"hacker_progress":null},"algorithms":{"id":3,"name":"Algorithms","slug":"algorithms","priority":14,"descriptions":"The true test of problem solving: when one realizes that time and memory aren't infinite.\n","rewards_system_enabled":true,"hacker_progress":null},"fp":{"id":5,"name":"Functional Programming","slug":"fp","priority":2,"descriptions":"The art of programming with expressions and functions. Experience the challenge of programming without state. A good paradigm for those interested in Map-Reduce and parallel computing.","rewards_system_enabled":null,"hacker_progress":null},"shell":{"id":6,"name":"Linux Shell","slug":"shell","priority":3,"descriptions":"Bash and command-line tools can be very powerful. Test your Linux scripting skills.","rewards_system_enabled":null,"hacker_progress":null},"python":{"id":12,"name":"Python","slug":"python","priority":8,"descriptions":"A step by step guide to Python, a language that is easy to pick up yet one of the most powerful.","rewards_system_enabled":null,"hacker_progress":null},"cpp":{"id":13,"name":"C++","slug":"cpp","priority":10,"descriptions":"A general-purpose programming language with imperative, object-oriented and generic programming features.","rewards_system_enabled":null,"hacker_progress":null},"ruby":{"id":14,"name":"Ruby","slug":"ruby","priority":7,"descriptions":"Let's dive into Ruby","rewards_system_enabled":null,"hacker_progress":null},"java":{"id":15,"name":"Java","slug":"java","priority":9,"descriptions":"A strictly object-oriented language designed to write industry-standard code.","rewards_system_enabled":null,"hacker_progress":null},"databases":{"id":16,"name":"Databases","slug":"databases","priority":5,"descriptions":"Check your Database skills","rewards_system_enabled":null,"hacker_progress":null},"data-structures":{"id":17,"name":"Data Structures","slug":"data-structures","priority":13,"descriptions":"Data Structures help in elegant representation of data for algorithms","rewards_system_enabled":null,"hacker_progress":null},"sql":{"id":18,"name":"SQL","slug":"sql","priority":6,"descriptions":"A special-purpose language designed for managing data held in a relational database.","rewards_system_enabled":null,"hacker_progress":null},"regex":{"id":19,"name":"Regex","slug":"regex","priority":1,"descriptions":"Explore the power of regular expressions","rewards_system_enabled":null,"hacker_progress":null},"security":{"id":20,"name":"Security","slug":"security","priority":0,"descriptions":"Practice and study of secure communications","rewards_system_enabled":null,"hacker_progress":null},"distributed-systems":{"id":21,"name":"Distributed Systems","slug":"distributed-systems","priority":4,"descriptions":null,"rewards_system_enabled":null,"hacker_progress":null},"mathematics":{"id":22,"name":"Mathematics","slug":"mathematics","priority":12,"descriptions":"Without mathematics, there's nothing you can do. Everything around you is mathematics. Everything around you is numbers.","rewards_system_enabled":null,"hacker_progress":null},"tutorials":{"id":24,"name":"Tutorials","slug":"tutorials","priority":15,"descriptions":null,"rewards_system_enabled":null,"hacker_progress":null}},"ab_tests":{"models":[{"id":21,"name":"reorder-domain-v2","variants":[{"variant":"control","weight":70,"id":51},{"variant":"treatment","weight":30,"id":52}],"hacker_variant":{"variant":"control","forced":false}},{"id":26,"name":"rewards-system","variants":[{"variant":"control","weight":100,"id":61},{"variant":"treatment","weight":0,"id":62}],"hacker_variant":{"variant":"control","forced":false}},{"id":27,"name":"onboarding-1","variants":[{"variant":"control","weight":50,"id":63},{"variant":"treatment","weight":50,"id":64}],"hacker_variant":{"variant":"control","forced":false}},{"id":30,"name":"smaller-challenge-font","variants":[{"variant":"control","weight":10,"id":69},{"variant":"treatment","weight":10,"id":70},{"variant":"default","weight":80,"id":71}],"hacker_variant":{"variant":"default","forced":false}},{"id":31,"name":"30-days-of-code","variants":[{"variant":"control","weight":10,"id":72},{"variant":"default","weight":40,"id":73},{"variant":"variant-ipn-daily","weight":10,"id":74},{"variant":"variant-one-daily","weight":10,"id":75},{"variant":"variant-feed-daily","weight":10,"id":76},{"variant":"variant-all-daily","weight":10,"id":77},{"variant":"variant-all","weight":10,"id":78}],"hacker_variant":{"variant":"variant-feed-daily","forced":false}},{"id":32,"name":"solve-me-first","variants":[{"variant":"default","weight":60,"id":79},{"variant":"control","weight":10,"id":80},{"variant":"treatment1","weight":10,"id":81},{"variant":"treatment2","weight":10,"id":82},{"variant":"treatment3","weight":10,"id":83}],"hacker_variant":{"variant":"default","forced":false}},{"id":35,"name":"world-codesprint","variants":[{"variant":"control","weight":10,"id":89},{"variant":"treatment1-register","weight":15,"id":90},{"variant":"treatment1-landing","weight":15,"id":91},{"variant":"treatment2-register","weight":15,"id":92},{"variant":"treatment2-landing","weight":15,"id":93},{"variant":"treatment3-register","weight":15,"id":94},{"variant":"treatment3-landing","weight":15,"id":95}],"hacker_variant":{"variant":"treatment1-landing","forced":false}},{"id":37,"name":"signup-birthday","variants":[{"variant":"control1","weight":8,"id":98},{"variant":"control2","weight":1,"id":99},{"variant":"treatment","weight":1,"id":100}],"hacker_variant":{"variant":"control1","forced":false}},{"id":38,"name":"bypass-login","variants":[{"variant":"control","weight":10,"id":101},{"variant":"treatment","weight":10,"id":102},{"variant":"default","weight":80,"id":103}],"hacker_variant":{"variant":"default","forced":false}},{"id":45,"name":"zen-submission-flow","variants":[{"variant":"control","weight":10,"id":122},{"variant":"treatment","weight":10,"id":123},{"variant":"default","weight":80,"id":124}],"hacker_variant":{"variant":"default","forced":false}},{"id":47,"name":"community-font","variants":[{"variant":"control","weight":10,"id":127},{"variant":"system_font","weight":10,"id":128},{"variant":"default","weight":80,"id":129}],"hacker_variant":{"variant":"default","forced":false}},{"id":48,"name":"30-days-of-code-tutorial-v2","variants":[{"variant":"control_small","weight":10,"id":130},{"variant":"control_large","weight":40,"id":131},{"variant":"tutorial_small","weight":10,"id":132},{"variant":"tutorial_large","weight":40,"id":133}],"hacker_variant":{"variant":"control_large","forced":false}},{"id":49,"name":"campaign-multiday","variants":[{"variant":"control","weight":10,"id":134},{"variant":"default","weight":70,"id":135},{"variant":"treatment_1day","weight":10,"id":136},{"variant":"treatment_all","weight":10,"id":137}],"hacker_variant":{"variant":"default","forced":false}},{"id":55,"name":"community-nav-copy","variants":[{"variant":"control","weight":10,"id":153},{"variant":"text","weight":10,"id":154},{"variant":"order","weight":10,"id":155},{"variant":"text_and_order","weight":10,"id":156},{"variant":"default","weight":60,"id":157}],"hacker_variant":{"variant":"default","forced":false}},{"id":60,"name":"campaign-multiday-v2","variants":[{"variant":"control","weight":0,"id":173},{"variant":"treatment_some","weight":10,"id":174},{"variant":"default","weight":70,"id":175},{"variant":"treatment_all","weight":10,"id":176}],"hacker_variant":{"variant":"default","forced":false}},{"id":62,"name":"campaign-multiday-v3","variants":[{"variant":"treatment_some","weight":10,"id":181},{"variant":"default","weight":80,"id":182},{"variant":"treatment_all","weight":10,"id":183}],"hacker_variant":{"variant":"default","forced":false}},{"id":63,"name":"long-term-holdout","variants":[{"variant":"campaign_holdout","weight":5,"id":184},{"variant":"contest_holdout","weight":5,"id":185},{"variant":"tutorial_holdout","weight":5,"id":186},{"variant":"default","weight":80,"id":187},{"variant":"control","weight":5,"id":188}],"hacker_variant":{"variant":"default","forced":false}},{"id":64,"name":"campaign-multiday-v4","variants":[{"variant":"control","weight":10,"id":189},{"variant":"less_aggressive","weight":10,"id":190},{"variant":"more_aggressive","weight":10,"id":191},{"variant":"default","weight":70,"id":192}],"hacker_variant":{"variant":"less_aggressive","forced":false}},{"id":65,"name":"challenge-rating","variants":[{"variant":"default","weight":80,"id":193},{"variant":"control","weight":10,"id":194},{"variant":"rate_challenge","weight":10,"id":195}],"hacker_variant":{"variant":"default","forced":false}},{"id":68,"name":"jobs-header","variants":[{"variant":"control","weight":50,"id":201},{"variant":"jobs_header","weight":50,"id":202}],"hacker_variant":{"variant":"jobs_header","forced":false}},{"id":72,"name":"mail-time-of-day","variants":[{"variant":"control","weight":10,"id":203},{"variant":"default","weight":80,"id":204},{"variant":"treatment","weight":10,"id":205}],"hacker_variant":{"variant":"treatment","forced":false}},{"id":74,"name":"contests-promo-v4","variants":[{"variant":"control","weight":10,"id":208},{"variant":"treatment_nav_only","weight":10,"id":209},{"variant":"treatment_nav_and_promo","weight":10,"id":210},{"variant":"default","weight":70,"id":211}],"hacker_variant":{"variant":"default","forced":false}},{"id":75,"name":"rank_page","variants":[{"variant":"control","weight":10,"id":212},{"variant":"no_rank","weight":10,"id":213},{"variant":"default","weight":80,"id":214}],"hacker_variant":{"variant":"default","forced":false}},{"id":76,"name":"share-buttons-everywhere","variants":[{"variant":"control","weight":10,"id":215},{"variant":"share_no_color","weight":10,"id":216},{"variant":"share_yes_color","weight":10,"id":217},{"variant":"share_move_30days","weight":10,"id":218},{"variant":"default","weight":60,"id":219}],"hacker_variant":{"variant":"default","forced":false}},{"id":77,"name":"hrw_synergy","variants":[{"variant":"control","weight":10,"id":220},{"variant":"no_logout_button","weight":10,"id":221},{"variant":"new_final_page","weight":10,"id":222},{"variant":"new_feedback_page","weight":10,"id":223},{"variant":"default","weight":60,"id":224}],"hacker_variant":{"variant":"default","forced":false}},{"id":78,"name":"june_details_page","variants":[{"variant":"control","weight":0,"id":225},{"variant":"treatment","weight":100,"id":226}],"hacker_variant":{"variant":"treatment","forced":false}},{"id":79,"name":"test-subject-active-users","variants":[{"variant":"subject_1","weight":5,"id":227},{"variant":"subject_2","weight":5,"id":228},{"variant":"subject_3","weight":5,"id":229},{"variant":"default","weight":85,"id":230}],"hacker_variant":{"variant":"default","forced":false}},{"id":80,"name":"test-subject-inactive-users","variants":[{"variant":"subject_1","weight":5,"id":231},{"variant":"subject_2","weight":5,"id":232},{"variant":"subject_3","weight":5,"id":233},{"variant":"holdout","weight":5,"id":234},{"variant":"default","weight":80,"id":235}],"hacker_variant":{"variant":"default","forced":false}},{"id":81,"name":"contests-promo-v5","variants":[{"variant":"control","weight":10,"id":236},{"variant":"treatment_clock","weight":10,"id":237},{"variant":"treatment_badge","weight":10,"id":238},{"variant":"default","weight":70,"id":239}],"hacker_variant":{"variant":"default","forced":false}},{"id":82,"name":"hacker-iq-v1","variants":[{"variant":"control","weight":10,"id":240},{"variant":"treatment","weight":0,"id":241},{"variant":"default","weight":90,"id":242}],"hacker_variant":{"variant":"default","forced":false}},{"id":83,"name":"auth_on_runcode","variants":[{"variant":"control","weight":10,"id":243},{"variant":"treatment","weight":10,"id":244},{"variant":"default","weight":80,"id":245}],"hacker_variant":{"variant":"control","forced":false}},{"id":84,"name":"hackdown_style","variants":[{"variant":"control","weight":50,"id":246},{"variant":"new_style","weight":50,"id":247}],"hacker_variant":{"variant":"new_style","forced":false}}]}};
      HR.MANIFEST_HASH = "16b975c00291b688336365a104f4409779b478d1";
    </script>

    <link rel="alternate" type="application/rss+xml" title="RSS" href="https://www.hackerrank.com/rest/blogs.rss">
<style type="text/css">.fb_hidden{position:absolute;top:-10000px;z-index:10001}.fb_reposition{overflow:hidden;position:relative}.fb_invisible{display:none}.fb_reset{background:none;border:0;border-spacing:0;color:#000;cursor:auto;direction:ltr;font-family:"lucida grande", tahoma, verdana, arial, sans-serif;font-size:11px;font-style:normal;font-variant:normal;font-weight:normal;letter-spacing:normal;line-height:1;margin:0;overflow:visible;padding:0;text-align:left;text-decoration:none;text-indent:0;text-shadow:none;text-transform:none;visibility:visible;white-space:normal;word-spacing:normal}.fb_reset>div{overflow:hidden}.fb_link img{border:none}@keyframes fb_transform{from{opacity:0;transform:scale(.95)}to{opacity:1;transform:scale(1)}}.fb_animate{animation:fb_transform .3s forwards}
.fb_dialog{background:rgba(82, 82, 82, .7);position:absolute;top:-10000px;z-index:10001}.fb_reset .fb_dialog_legacy{overflow:visible}.fb_dialog_advanced{padding:10px;-moz-border-radius:8px;-webkit-border-radius:8px;border-radius:8px}.fb_dialog_content{background:#fff;color:#333}.fb_dialog_close_icon{background:url(https://fbstatic-a.akamaihd.net/rsrc.php/v2/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 0 transparent;_background-image:url(https://fbstatic-a.akamaihd.net/rsrc.php/v2/yL/r/s816eWC-2sl.gif);cursor:pointer;display:block;height:15px;position:absolute;right:18px;top:17px;width:15px}.fb_dialog_mobile .fb_dialog_close_icon{top:5px;left:5px;right:auto}.fb_dialog_padding{background-color:transparent;position:absolute;width:1px;z-index:-1}.fb_dialog_close_icon:hover{background:url(https://fbstatic-a.akamaihd.net/rsrc.php/v2/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 -15px transparent;_background-image:url(https://fbstatic-a.akamaihd.net/rsrc.php/v2/yL/r/s816eWC-2sl.gif)}.fb_dialog_close_icon:active{background:url(https://fbstatic-a.akamaihd.net/rsrc.php/v2/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 -30px transparent;_background-image:url(https://fbstatic-a.akamaihd.net/rsrc.php/v2/yL/r/s816eWC-2sl.gif)}.fb_dialog_loader{background-color:#f6f7f9;border:1px solid #606060;font-size:24px;padding:20px}.fb_dialog_top_left,.fb_dialog_top_right,.fb_dialog_bottom_left,.fb_dialog_bottom_right{height:10px;width:10px;overflow:hidden;position:absolute}.fb_dialog_top_left{background:url(https://fbstatic-a.akamaihd.net/rsrc.php/v2/ye/r/8YeTNIlTZjm.png) no-repeat 0 0;left:-10px;top:-10px}.fb_dialog_top_right{background:url(https://fbstatic-a.akamaihd.net/rsrc.php/v2/ye/r/8YeTNIlTZjm.png) no-repeat 0 -10px;right:-10px;top:-10px}.fb_dialog_bottom_left{background:url(https://fbstatic-a.akamaihd.net/rsrc.php/v2/ye/r/8YeTNIlTZjm.png) no-repeat 0 -20px;bottom:-10px;left:-10px}.fb_dialog_bottom_right{background:url(https://fbstatic-a.akamaihd.net/rsrc.php/v2/ye/r/8YeTNIlTZjm.png) no-repeat 0 -30px;right:-10px;bottom:-10px}.fb_dialog_vert_left,.fb_dialog_vert_right,.fb_dialog_horiz_top,.fb_dialog_horiz_bottom{position:absolute;background:#525252;filter:alpha(opacity=70);opacity:.7}.fb_dialog_vert_left,.fb_dialog_vert_right{width:10px;height:100%}.fb_dialog_vert_left{margin-left:-10px}.fb_dialog_vert_right{right:0;margin-right:-10px}.fb_dialog_horiz_top,.fb_dialog_horiz_bottom{width:100%;height:10px}.fb_dialog_horiz_top{margin-top:-10px}.fb_dialog_horiz_bottom{bottom:0;margin-bottom:-10px}.fb_dialog_iframe{line-height:0}.fb_dialog_content .dialog_title{background:#6d84b4;border:1px solid #365899;color:#fff;font-size:14px;font-weight:bold;margin:0}.fb_dialog_content .dialog_title>span{background:url(https://fbstatic-a.akamaihd.net/rsrc.php/v2/yd/r/Cou7n-nqK52.gif) no-repeat 5px 50%;float:left;padding:5px 0 7px 26px}body.fb_hidden{-webkit-transform:none;height:100%;margin:0;overflow:visible;position:absolute;top:-10000px;left:0;width:100%}.fb_dialog.fb_dialog_mobile.loading{background:url(https://fbstatic-a.akamaihd.net/rsrc.php/v2/ya/r/3rhSv5V8j3o.gif) white no-repeat 50% 50%;min-height:100%;min-width:100%;overflow:hidden;position:absolute;top:0;z-index:10001}.fb_dialog.fb_dialog_mobile.loading.centered{width:auto;height:auto;min-height:initial;min-width:initial;background:none}.fb_dialog.fb_dialog_mobile.loading.centered #fb_dialog_loader_spinner{width:100%}.fb_dialog.fb_dialog_mobile.loading.centered .fb_dialog_content{background:none}.loading.centered #fb_dialog_loader_close{color:#fff;display:block;padding-top:20px;clear:both;font-size:18px}#fb-root #fb_dialog_ipad_overlay{background:rgba(0, 0, 0, .45);position:absolute;bottom:0;left:0;right:0;top:0;width:100%;min-height:100%;z-index:10000}#fb-root #fb_dialog_ipad_overlay.hidden{display:none}.fb_dialog.fb_dialog_mobile.loading iframe{visibility:hidden}.fb_dialog_content .dialog_header{-webkit-box-shadow:white 0 1px 1px -1px inset;background:-webkit-gradient(linear, 0% 0%, 0% 100%, from(#738ABA), to(#2C4987));border-bottom:1px solid;border-color:#1d4088;color:#fff;font:14px Helvetica, sans-serif;font-weight:bold;text-overflow:ellipsis;text-shadow:rgba(0, 30, 84, .296875) 0 -1px 0;vertical-align:middle;white-space:nowrap}.fb_dialog_content .dialog_header table{-webkit-font-smoothing:subpixel-antialiased;height:43px;width:100%}.fb_dialog_content .dialog_header td.header_left{font-size:12px;padding-left:5px;vertical-align:middle;width:60px}.fb_dialog_content .dialog_header td.header_right{font-size:12px;padding-right:5px;vertical-align:middle;width:60px}.fb_dialog_content .touchable_button{background:-webkit-gradient(linear, 0% 0%, 0% 100%, from(#4966A6), color-stop(.5, #355492), to(#2A4887));border:1px solid #29487d;-webkit-background-clip:padding-box;-webkit-border-radius:3px;-webkit-box-shadow:rgba(0, 0, 0, .117188) 0 1px 1px inset, rgba(255, 255, 255, .167969) 0 1px 0;display:inline-block;margin-top:3px;max-width:85px;line-height:18px;padding:4px 12px;position:relative}.fb_dialog_content .dialog_header .touchable_button input{border:none;background:none;color:#fff;font:12px Helvetica, sans-serif;font-weight:bold;margin:2px -12px;padding:2px 6px 3px 6px;text-shadow:rgba(0, 30, 84, .296875) 0 -1px 0}.fb_dialog_content .dialog_header .header_center{color:#fff;font-size:16px;font-weight:bold;line-height:18px;text-align:center;vertical-align:middle}.fb_dialog_content .dialog_content{background:url(https://fbstatic-a.akamaihd.net/rsrc.php/v2/y9/r/jKEcVPZFk-2.gif) no-repeat 50% 50%;border:1px solid #555;border-bottom:0;border-top:0;height:150px}.fb_dialog_content .dialog_footer{background:#f6f7f9;border:1px solid #555;border-top-color:#ccc;height:40px}#fb_dialog_loader_close{float:left}.fb_dialog.fb_dialog_mobile .fb_dialog_close_button{text-shadow:rgba(0, 30, 84, .296875) 0 -1px 0}.fb_dialog.fb_dialog_mobile .fb_dialog_close_icon{visibility:hidden}#fb_dialog_loader_spinner{animation:rotateSpinner 1.2s linear infinite;background-color:transparent;background-image:url(https://fbstatic-a.akamaihd.net/rsrc.php/v2/yD/r/t-wz8gw1xG1.png);background-repeat:no-repeat;background-position:50% 50%;height:24px;width:24px}@keyframes rotateSpinner{0%{transform:rotate(0deg)}100%{transform:rotate(360deg)}}
.fb_iframe_widget{display:inline-block;position:relative}.fb_iframe_widget span{display:inline-block;position:relative;text-align:justify}.fb_iframe_widget iframe{position:absolute}.fb_iframe_widget_fluid_desktop,.fb_iframe_widget_fluid_desktop span,.fb_iframe_widget_fluid_desktop iframe{max-width:100%}.fb_iframe_widget_fluid_desktop iframe{min-width:220px;position:relative}.fb_iframe_widget_lift{z-index:1}.fb_hide_iframes iframe{position:relative;left:-10000px}.fb_iframe_widget_loader{position:relative;display:inline-block}.fb_iframe_widget_fluid{display:inline}.fb_iframe_widget_fluid span{width:100%}.fb_iframe_widget_loader iframe{min-height:32px;z-index:2;zoom:1}.fb_iframe_widget_loader .FB_Loader{background:url(https://fbstatic-a.akamaihd.net/rsrc.php/v2/y9/r/jKEcVPZFk-2.gif) no-repeat;height:32px;width:32px;margin-left:-16px;position:absolute;left:50%;z-index:4}</style><style type="text/css">.fp__btn{-webkit-box-sizing:border-box;-moz-box-sizing:border-box;box-sizing:border-box;display:inline-block;height:34px;padding:4px 20px 5px 40px;margin-bottom:0;vertical-align:middle;-ms-touch-action:manipulation;touch-action:manipulation;cursor:pointer;-webkit-user-select:none;-moz-user-select:none;-ms-user-select:none;user-select:none;font-family:"Open Sans", sans-serif;font-size:12px;font-weight:600;line-height:1.42857143;color:#fff;text-align:center;white-space:nowrap;background:#3ac7ed;background-image:url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAA0AAAANCAYAAABy6+R8AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAA3hpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNi1jMDE0IDc5LjE1Njc5NywgMjAxNC8wOC8yMC0wOTo1MzowMiAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wTU09Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9tbS8iIHhtbG5zOnN0UmVmPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvc1R5cGUvUmVzb3VyY2VSZWYjIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtcE1NOk9yaWdpbmFsRG9jdW1lbnRJRD0ieG1wLmRpZDpkMTI4ZDMwOC1iNjY2LTQyNzgtOTU1MC04NDk5YzViMzBhMmYiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6OTJCRDQ1RUEwQzIxMTFFNThEOTU4QzAyNzQ4QUU2NzUiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6OTJCRDQ1RTkwQzIxMTFFNThEOTU4QzAyNzQ4QUU2NzUiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIDIwMTQgKE1hY2ludG9zaCkiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDoxZDgzZTQ5ZS0zYzE1LTQ3MTgtOTFkZi1iNTc0N2EyMjI5M2MiIHN0UmVmOmRvY3VtZW50SUQ9InhtcC5kaWQ6ZDEyOGQzMDgtYjY2Ni00Mjc4LTk1NTAtODQ5OWM1YjMwYTJmIi8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+SmKrTgAAAOxJREFUeNqE0bFqQjEYhuFooSjUUhBEujsVXdtJwdFRvBBx1ntwEPdS8Ao6OpU6qbg4ilKRglooqDhV0jf4HTgcYht4SEL+LwlJzFp7b4zpoogE1lhghrl8YosNvg2hvj23IcbY2b/byoV+FDRyhTxeVXSIhF5c0QpfyISCzkJFD5rfIuXGbtIIjkUOMVRCO98hietgw2DXGpq4QSlynaP652goqqPCE0YYoPxfqKXQ0rceN/6WUj/3LYZDT3jUOKt+6t1SR1Z1nTfNJ5pXfNcLBnUVuU8u6AHe9fwXQ+4P2vjAHj2kLzyS+RVgAJKfyOcTLuk9AAAAAElFTkSuQmCC");background-repeat:no-repeat;background-position:17px 9px;border:1px solid transparent;border-radius:17px}.fp__btn:hover{background-color:#12a2c8}.fp__btn:active,.fp__btn:focus{outline:none}@media only screen and (min--moz-device-pixel-ratio: 2), only screen and (-o-min-device-pixel-ratio: 2 / 1), only screen and (-webkit-min-device-pixel-ratio: 2), only screen and (min-device-pixel-ratio: 2){.fp__btn{background-image:url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABkAAAAaCAYAAABCfffNAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAA3hpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNi1jMDE0IDc5LjE1Njc5NywgMjAxNC8wOC8yMC0wOTo1MzowMiAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wTU09Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9tbS8iIHhtbG5zOnN0UmVmPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvc1R5cGUvUmVzb3VyY2VSZWYjIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtcE1NOk9yaWdpbmFsRG9jdW1lbnRJRD0ieG1wLmRpZDpkMTI4ZDMwOC1iNjY2LTQyNzgtOTU1MC04NDk5YzViMzBhMmYiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6OTJCRDQ1RTYwQzIxMTFFNThEOTU4QzAyNzQ4QUU2NzUiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6OTJCRDQ1RTUwQzIxMTFFNThEOTU4QzAyNzQ4QUU2NzUiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIDIwMTQgKE1hY2ludG9zaCkiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDoyYTg3Yjk2MS1lYjk5LTRhODAtYWZjZi0wZjA2MTBlNzA5ZDYiIHN0UmVmOmRvY3VtZW50SUQ9InhtcC5kaWQ6ZDEyOGQzMDgtYjY2Ni00Mjc4LTk1NTAtODQ5OWM1YjMwYTJmIi8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+yaecmgAAAftJREFUeNq0ls8rRFEUx9+MSUKR8mPKr4YtxUJJykZkY6HIUlmglKUSFmwssZB/wI+FstGUBcWUBRZWyI8I0+RX2AjxfI/O5Di9Z+7z49Rnuvfcc+Z73733nft8tm1bbDWgF9SCHPAE7sAZOAH7zAE4BreWoflYZACMUN8yNxI5Ys5BDFwx1L7k9jOJ1KOxbP2fzZNIGI1GdjyDOXABAqAAVIHQL0QeLYjc25/WTcvnQB5oAeNgz/Zma/QHb8JR5yIiWRDxryAKHl0ENkEJJcWEcyyBQA54EfHrYiwVZIMQKOf2xxj9hEUSzaj6G5EONdMpgye3/NiYCbFJKWAV9Lkc5wbVjxltPatNO6xnk5hNEWgDNyqmn8eTQC4vlU8/iSWCBsEDJ2+BDBF47LKxJHqlfF1uInGS+bhqv5djO5RIxA1ahiUDgSdQofN9okAmslYqEcq3Am7AC9evGbCjEwMeykOag28YRBIl+j2IpDv4TkwS/b94Erpvon8tkqX6dHG9/bVIturvmiY6ibSDWTAJ8oW/WMVtG09PnekRde6bxdi1Gqs0fMe+iGTwyyStkMdKlX/XVCBeheMWBMmi/8pfKpa4nuM26ukCFopUJA/VjDtBUBXIRadKa7pcRBk4/aY2RVR1/pEIkcmVdJM/Mu7ABugBAa8CxLsAAwAX4ouMwjfqEwAAAABJRU5ErkJggg==");background-size:13px 13px}}</style></head>
<body id="hr_v2" class="new_hackdown" style="zoom: 1;">
    <script type="text/template" id="navigation">
    <nav class="page-header">
        <div class="container">
            <span class="nav-links"></span>
            <span class="nav-buttons"></span>
        </div>
    </nav>
</script>
<script type="text/template" id="nav-links">
  <%
  var abtest_community_nav = null;
  if (HR.ABTest) {
    abtest_community_nav = HR.ABTest.get_variant("community-nav-copy");
  }
  %>
      <ul class="pull-left nav-links-active">
        <li>
          <a href="" class="nav_link backbone logo_mark js_logo_mark" data-analytics="NavBarLogo"><img id="feed-intro" src="<%- asset_path('brand/h_mark_sm.png') %>" alt=""></a>
        </li>
        <li>
            <a href="/domains" class="nav_link backbone domains" data-analytics="NavBarDomains">
                <i class="icon-home"></i>
                <% if (_.contains(["text", "text_and_order"], abtest_community_nav)) { %>
                  <span>Practice</span>
                <% } else { %>
                  <span>Domains</span>
                <% } %>
            </a>
        </li>
        <li>
            <a href="/contests" class="nav_link backbone contests" data-analytics="NavBarContests">
              <% if (HR.ABTest && (HR.ABTest.is_variant("contests-promo-v5", "default") || HR.ABTest.is_variant("contests-promo-v5", "treatment_badge"))) { %>
	        <i class="icon-contests"></i>
              <% } else { %>
                <i class="icon-clock"></i>
              <% } %>
              <% if (_.contains(["text", "text_and_order"], abtest_community_nav)) { %>
                <span>Compete</span>
              <% } else { %>
                <span>Contests</span>
              <% } %>
	        </a>
        </li>
        <% if (_.contains(["order", "text_and_order"], abtest_community_nav)) { %>
          <li>
              <a href="/jobs" class="nav_link backbone" data-analytics="NavBarJobs">
                  <i class="icon-briefcase"></i>
                  <% if (abtest_community_nav === "text_and_order") { %>
                    <span>Find Jobs</span>
                  <% } else { %>
                    <span>Jobs</span>
                  <% } %>
              </a>
          </li>
        <% } %>
        <li>
            <% if (HR.ABTest && HR.ABTest.is_variant("rewards-system","treatment")) { %>
                <a href="/progress" class="nav_link backbone" data-analytics="NavBarMyProgress" id='myprogress-nav-link'>
                    <i class="icon-chart-area"></i>
                    <span>Progress</span>
                </a>
            <% } else { %>
                <a href="/rank" class="nav_link backbone" data-analytics="NavBarMyRank" id='myrank-nav-link'>
                    <i class="icon-award"></i>
                    <span>Rank</span>
                </a>
            <% } %>
        </li>
        <li>
            <a href="/leaderboard" class="nav_link backbone" data-analytics="NavBarLeaderboard" id='leaderboard-nav-link'>
	            <i class="icon-trophy"></i>
	            <span>Leaderboard</span>
	        </a>
        </li>
        <% if (!_.contains(["order", "text_and_order"], abtest_community_nav)) { %>
          <li>
              <a href="/jobs" class="nav_link backbone" data-analytics="NavBarJobs">
                  <i class="icon-briefcase"></i>
                  <% if (abtest_community_nav === "text") { %>
                    <span>Find Jobs</span>
                  <% } else { %>
                    <span>Jobs</span>
                  <% } %>
              </a>
          </li>
        <% } %>
    </ul>
</script>

<script type="text/template" id="nav-search">
    <div class="hide-in-private-contest search-input input-icon">
        <input type="text" id="search-text" class="search-query" autocomplete="off" data-analytics="NavBarSearchBox">
        <i class="icon-search"></i>
    </div>
    <div class="hide-in-private-contest search-result hide">
        <ul class="unstyled"></ul>
    </div>
</script>

<script type="text/template" id="nav-buttons">
    <ul class="pull-right nav-admin mmL">
        <% if (profile && profile.isLoggedIn()) { %>
            <li class="hide-in-private-contest notify_dropdown dropdown" id="tab-profile-messages">
                <a class="cursor backbone nav_link hr_nav_messages_link" data-toggle="dropdown" data-analytics="NavBarMessageIcon">
                    <i class="icon-chat icon--single"></i>
                    <span class="indicator number-indicator hr_messages_count"></span>
                </a>
                <div class="dropdown-menu large">
                    <header class="psT psB text-center">
                        <strong>Messages</strong>
                    </header>
                        <div id="notify_messages" class="dropdown-body">
                            <ul></ul>
                        </div>
                    <footer class="final text-center">
                        <a class="btn backbone" href="/inbox" data-analytics="NavBarMessageShowAll">Show All</a>
                    </footer>
                </div>
            </li>
            <li class="dropdown notify_dropdown" id="tab-profile-notifs">
                <a class="cursor backbone nav_link hr_nav_notifications_link" data-toggle="dropdown" data-analytics="NavBarNotificationsIcon">
                    <i class="icon-megaphone icon--single"></i>
                    <span class="indicator number-indicator hr_notifications_count"></span>
                </a>
                <div class="dropdown-menu large" id="notify_broadcasts">
                    <header class="psA">
                        <strong>Notifications</strong>
                        <a class="hr_archive_all pull-right" data-analytics="NavBarNotificationsArchiveAll"><i class="icon-folder-open"></i>Archive All</a>
                    </header>
                    <div class="clearfix dropdown-body">
                        <ul class="hr_nav_notifications_list">
                        </ul>
                    </div>
                    <footer class="final">
                        <a class="btn backbone" href="/notifications" data-analytics="NavBarNotificationsShowAll">Show All</a>
                    </footer>
                </div>
            </li>
            <li class="dropdown-auth">
                <div class="dropdown" id="profile-menu">
                    <a class="backbone nav_link dropdown-toggle" href="" data-toggle="dropdown" data-analytics="NavBarProfileDropDown">
                        <img src="<%= _profile.avatar %>" alt="" class="avatar" onerror="this.onerror=null; this.src='https://d3rpyts3de3lx8.cloudfront.net/hackerrank/assets/gravatar.jpg';">
                        <span class="mmR"><%- _profile.username %></span>
                        <span class="team-name"></span>
                        <i class="icon-down-open"></i>
                    </a>
                    <div class="dropdown-menu drop-list pull-right" style="max-width:">
                        <ul>
                            <li class="hide-in-private-contest"><a class="navigation_hackos backbone" href="/<%- _profile.username %>/hackos" data-analytics="NavBarProfileDropDownHackos">Hackos: <span class="navigation_hackos-count"><%= _profile.hacko_amount %></span></a></li>
                            <li class="hide-in-private-contest">
                                <a class="backbone" rel="tooltip" data-placement="left" href="/<%- _profile.username %>" data-analytics="NavBarProfileDropDownProfile">
	                                Profile
	                                <!-- NOTE also add title="x% complete" to profile link-->
                                    <span class="progress-wrapper">
                                        <span class="progress-bar" style="width: <%= _profileProgress %>%;"></span>
                                    </span>
                                </a>
                            </li>
                            <li class="hide-in-private-contest"><a class="backbone" href="<%= HR.appController.get_current_contest_namespace() %>/settings" data-analytics="NavBarProfileDropDownSettings">Settings</a></li>
                            <li class="hide-in-private-contest"><a class="backbone" href="<%= HR.appController.get_current_contest_namespace() %>/network" data-analytics="NavBarProfileDropDownNetwork">Network</a></li>
                            <li class="hide-in-private-contest"><a class="backbone" href="/submissions" data-analytics="NavBarProfileDropDownSubmissions">Submissions</a></li>
                            <li class="hide-in-private-contest"><a class="backbone" href="/administration" data-analytics="NavBarProfileDropDownAdministration">Administration</a></li>
                            <li><a class="logout-button" data-analytics="NavBarProfileDropDownLogout">Logout</a></li>
                        </ul>
                    </div>
                </div>
            </li>
        <% } else { %>
            <li class="nav-btn">
                 <a href="/auth/login/<%= HR.appController.get_current_contest_slug() %>" class="login pull-right btn btn-dark btn-default" data-analytics="NavBarLoginIcon"> Log In
                 </a>
            </li>
        <% } %>
    </ul>
    <ul class="pull-right psR">
        <li class="hide-in-private-contest search-input-container input-icon main-hr-search" id="search-span">
              <span class="search_form"></span>
            </li>
    </ul>
</script>

    <script type="text/template" id="breadcrumb">
    <% var counter = 0; %>
    <div class="content-header">
        <div class="container">
            <div class="clearfix">
                <div class="pull-left pjT bcrumb" style="padding-top: 30px !important">
                    <% var breadcrumb_level = 0; %>
                    <% for (var index in level_values) { %>
                        <% if (counter==0) {
                            counter = counter + 1;
                        } else { %>
                            <i class="icon-right-open mmL"></i>
                        <% } %>
                        <a href="<%= level_values[index].url %>" class="backbone" data-analytics="Breadcrumb" data-attr1="<%- level_values[index].text %>" data-attr2="<%= index %>" data-attr7="<%= breadcrumb_level += 1 %>"><%- level_values[index].text %></a>
                    <% } %>
                </div>
                <div class="pull-right hide domain-scores">
                    <div class="pull-left badge-progress">
                    </div>
                    <div class="pull-right pdT brcumb-points">
                        <span class="zeta bold">Points: </span><span class="bold domain-score"></span>
                        <span class="domain-rank-span">
                            <span class="zeta bold">Rank: </span><span class="bold msR domain-rank "></span>
                        </span>
                    </div>
                </div>

                <div class="social-share-wrap-2 hide"></div>
            </div>
        </div>
    </div>

</script>


    <div id="wrapper" style="min-height: 559px;">
        <div id="navigation">
    <nav class="page-header">
        <div class="container">
            <span class="nav-links">
  
      <ul class="pull-left nav-links-active">
        <li>
          <a href="https://www.hackerrank.com/domains" class="nav_link backbone logo_mark js_logo_mark" data-analytics="NavBarLogo"><img id="feed-intro" src="./New Year Chaos _files/h_mark_sm-54e04e2dc05825511221137eb36e2c31.png" alt=""></a>
        </li>
        <li>
            <a href="https://www.hackerrank.com/domains" class="nav_link backbone domains" data-analytics="NavBarDomains">
                <i class="icon-home"></i>
                
                  <span>Domains</span>
                
            </a>
        </li>
        <li>
            <a href="https://www.hackerrank.com/contests" class="nav_link backbone contests" data-analytics="NavBarContests">
              
	        <i class="icon-contests"></i>
              
              
                <span>Contests</span>
              
	        </a>
        </li>
        
        <li>
            
                <a href="https://www.hackerrank.com/rank" class="nav_link backbone" data-analytics="NavBarMyRank" id="myrank-nav-link">
                    <i class="icon-award"></i>
                    <span>Rank</span>
                </a>
            
        </li>
        <li>
            <a href="https://www.hackerrank.com/leaderboard" class="nav_link backbone" data-analytics="NavBarLeaderboard" id="leaderboard-nav-link">
	            <i class="icon-trophy"></i>
	            <span>Leaderboard</span>
	        </a>
        </li>
        
          <li>
              <a href="https://www.hackerrank.com/jobs" class="nav_link backbone" data-analytics="NavBarJobs">
                  <i class="icon-briefcase"></i>
                  
                    <span>Jobs</span>
                  
              </a>
          </li>
        
    </ul>
</span>
            <span class="nav-buttons">
    <ul class="pull-right nav-admin mmL">
        
            <li class="hide-in-private-contest notify_dropdown dropdown" id="tab-profile-messages">
                <a class="cursor backbone nav_link hr_nav_messages_link" data-toggle="dropdown" data-analytics="NavBarMessageIcon">
                    <i class="icon-chat icon--single"></i>
                    <span class="indicator number-indicator hr_messages_count"></span>
                </a>
                <div class="dropdown-menu large">
                    <header class="psT psB text-center">
                        <strong>Messages</strong>
                    </header>
                        <div id="notify_messages" class="dropdown-body">
                            <ul></ul>
                        </div>
                    <footer class="final text-center">
                        <a class="btn backbone" href="https://www.hackerrank.com/inbox" data-analytics="NavBarMessageShowAll">Show All</a>
                    </footer>
                </div>
            </li>
            <li class="dropdown notify_dropdown" id="tab-profile-notifs">
                <a class="cursor backbone nav_link hr_nav_notifications_link" data-toggle="dropdown" data-analytics="NavBarNotificationsIcon">
                    <i class="icon-megaphone icon--single"></i>
                    <span class="indicator number-indicator hr_notifications_count"></span>
                </a>
                <div class="dropdown-menu large" id="notify_broadcasts">
                    <header class="psA">
                        <strong>Notifications</strong>
                        <a class="hr_archive_all pull-right" data-analytics="NavBarNotificationsArchiveAll"><i class="icon-folder-open"></i>Archive All</a>
                    </header>
                    <div class="clearfix dropdown-body">
                        <ul class="hr_nav_notifications_list">
                        </ul>
                    </div>
                    <footer class="final">
                        <a class="btn backbone" href="https://www.hackerrank.com/notifications" data-analytics="NavBarNotificationsShowAll">Show All</a>
                    </footer>
                </div>
            </li>
            <li class="dropdown-auth">
                <div class="dropdown" id="profile-menu">
                    <a class="backbone nav_link dropdown-toggle" href="https://www.hackerrank.com/" data-toggle="dropdown" data-analytics="NavBarProfileDropDown">
                        <img src="./New Year Chaos _files/150x150.png" alt="" class="avatar" onerror="this.onerror=null; this.src=&#39;https://d3rpyts3de3lx8.cloudfront.net/hackerrank/assets/gravatar.jpg&#39;;">
                        <span class="mmR">gaurav4ever</span>
                        <span class="team-name"></span>
                        <i class="icon-down-open"></i>
                    </a>
                    <div class="dropdown-menu drop-list pull-right" style="max-width:">
                        <ul>
                            <li class="hide-in-private-contest"><a class="navigation_hackos backbone" href="https://www.hackerrank.com/gaurav4ever/hackos" data-analytics="NavBarProfileDropDownHackos">Hackos: <span class="navigation_hackos-count">3838</span></a></li>
                            <li class="hide-in-private-contest">
                                <a class="backbone" rel="tooltip" data-placement="left" href="https://www.hackerrank.com/gaurav4ever" data-analytics="NavBarProfileDropDownProfile">
	                                Profile
	                                <!-- NOTE also add title="x% complete" to profile link-->
                                    <span class="progress-wrapper">
                                        <span class="progress-bar" style="width: 80%;"></span>
                                    </span>
                                </a>
                            </li>
                            <li class="hide-in-private-contest"><a class="backbone" href="https://www.hackerrank.com/settings" data-analytics="NavBarProfileDropDownSettings">Settings</a></li>
                            <li class="hide-in-private-contest"><a class="backbone" href="https://www.hackerrank.com/network" data-analytics="NavBarProfileDropDownNetwork">Network</a></li>
                            <li class="hide-in-private-contest"><a class="backbone" href="https://www.hackerrank.com/submissions" data-analytics="NavBarProfileDropDownSubmissions">Submissions</a></li>
                            <li class="hide-in-private-contest"><a class="backbone" href="https://www.hackerrank.com/administration" data-analytics="NavBarProfileDropDownAdministration">Administration</a></li>
                            <li><a class="logout-button" data-analytics="NavBarProfileDropDownLogout">Logout</a></li>
                        </ul>
                    </div>
                </div>
            </li>
        
    </ul>
    <ul class="pull-right psR">
        <li class="hide-in-private-contest search-input-container input-icon main-hr-search" id="search-span">
              <span class="search_form">
    <div class="hide-in-private-contest search-input input-icon">
        <input type="text" id="search-text" class="search-query ui-autocomplete-input" autocomplete="off" data-analytics="NavBarSearchBox" data-original-title="" title="">
        <i class="icon-search"></i>
    </div>
    <div class="hide-in-private-contest search-result hide" style="display: block;">
        <ul class="unstyled"></ul>
    </div>
</span>
            </li>
    </ul>
</span>
        </div>
    </nav>
</div>
        <div id="side-navigation"></div>
        <div id="verifyaccount" class="container"></div>
        <div id="ajax-msg-wrap"><div id="ajax-msg" style="margin-left: 0px; display: none;"><span class="ajax-loader"></span><span class="ajax-msg"></span></div></div>
        <!--<div id="countdowntimer" style="display: none;"></div>-->
        <div id="breadcrumb" style="display: block;">
    
    <div class="content-header">
        <div class="container">
            <div class="clearfix">
                <div class="pull-left pjT bcrumb" style="padding-top: 30px !important">
                    
                    
                        
                        <a href="https://www.hackerrank.com/domains" class="backbone" data-analytics="Breadcrumb" data-attr1="All Domains" data-attr2="global" data-attr7="1">All Domains</a>
                    
                        
                            <i class="icon-right-open mmL"></i>
                        
                        <a href="https://www.hackerrank.com/domains/algorithms" class="backbone" data-analytics="Breadcrumb" data-attr1="Algorithms" data-attr2="contest-track" data-attr7="2">Algorithms</a>
                    
                        
                            <i class="icon-right-open mmL"></i>
                        
                        <a href="https://www.hackerrank.com/domains/algorithms/implementation" class="backbone" data-analytics="Breadcrumb" data-attr1="Implementation" data-attr2="contest-chapter" data-attr7="3">Implementation</a>
                    
                        
                            <i class="icon-right-open mmL"></i>
                        
                        <a href="https://www.hackerrank.com/challenges/new-year-chaos" class="backbone" data-analytics="Breadcrumb" data-attr1="New Year Chaos" data-attr2="challenge" data-attr7="4">New Year Chaos</a>
                    
                </div>
                <div class="pull-right hide domain-scores" style="display: block;">
                    <div class="pull-left badge-progress">
    <div class="mlR js-tooltip" data-placement="bottom" style="border-left-color: #d3d3d3; border-left-style: solid; border-left-width: 1px; border-right-color: #d3d3d3; border-right-style: solid; border-right-width: 1px; padding: 15px" title="">
        <p class="bold small">Badge Progress</p>
        <div class="progress-wrapper msT" style="width: 150px; display: inline-block">
            <span class="progress-bar" style="width: 100%"></span>
        </div>
        <div style="display: inline-block; position: relative; top: -4px; left: 10px;">
            
                <i class="icon-star" style="color: gold"></i>
            
                <i class="icon-star" style="color: gold"></i>
            
                <i class="icon-star" style="color: gold"></i>
            
                <i class="icon-star" style="color: gold"></i>
            
        </div>
        
    </div>

</div>
                    <div class="pull-right pdT brcumb-points">
                        <span class="zeta bold">Points: </span><span class="bold domain-score">2868.30</span>
                        <span class="domain-rank-span">
                            <span class="zeta bold">Rank: </span><span class="bold msR domain-rank ">1046</span>
                        </span>
                    </div>
                </div>

                <div class="social-share-wrap-2 hide"></div>
            </div>
        </div>
    </div>

</div>
        <div id="flash"></div>
        <div id="followbanner"></div>
        <div id="submission-success-messages"><div id="submission-model-22376942" style="display: none;" class="submission-model-panel"></div><div id="submission-model-22377272" style="display: none;" class="submission-model-panel"></div><div id="submission-model-22383771" style="display: none;" class="submission-model-panel"></div><div id="submission-model-22383798" style="display: none;" class="submission-model-panel"></div><div id="submission-model-22383807" style="display: none;" class="submission-model-panel"></div></div>
        <div id="contestwide-broadcast"></div>
        <div id="content" class="main_content"><div class="challenge-view"><div>
    <div class="challenge-header">    <div class="container">
        <div class="clearfix mdT mmB">
            <h2 class="hr_tour-challenge-name pull-left mlT">
                New Year Chaos
                
            </h2>
            
        </div>
        
            <div class="clearfix mlB mmT">
                <img src="./New Year Chaos _files/150x150(1).png" height="25" width="25" class="avatar pull-left msR" onerror="this.onerror=null; this.src=&#39;https://d3rpyts3de3lx8.cloudfront.net/hackerrank/assets/gravatar.jpg&#39;;">
                <span class="small bold">by <a class="backbone color-blue" href="https://www.hackerrank.com/Shafaet" data-analytics="ChallengeViewHeaderAuthor" data-attr1="new-year-chaos" data-attr2="Shafaet">Shafaet</a></span>
            </div>
        
    </div>
                

    <div class="container">
        <ul class="nav-tabs nav mlT">
                <li id="problemTab" class="active"><a class="hr-problem-link" href="https://www.hackerrank.com/challenges/new-year-chaos" data-analytics="ChallengeViewTab" data-attr1="new-year-chaos" data-attr2="Problem">Problem</a></li>
                
                
                    <li id="submissionsTab"><a class="hr-submissions-link" href="https://www.hackerrank.com/challenges/new-year-chaos/submissions" data-analytics="ChallengeViewTab" data-attr1="new-year-chaos" data-attr2="Submissions">Submissions</a></li>
                
                <li id="leaderboardTab"><a class="hr-leaderboard-link" href="https://www.hackerrank.com/challenges/new-year-chaos/leaderboard" data-analytics="ChallengeViewTab" data-attr1="new-year-chaos" data-attr2="Leaderboard">Leaderboard</a></li>
                
                    <li id="forumTab"><a class="hr-forum-link" href="https://www.hackerrank.com/challenges/new-year-chaos/forum" data-analytics="ChallengeViewTab" data-attr1="new-year-chaos" data-attr2="Discussions">Discussions</a></li>
                
                
                <li id="editorialTab"><a class="hr-editorial-link" href="https://www.hackerrank.com/challenges/new-year-chaos/editorial" data-analytics="ChallengeViewTab" data-attr1="new-year-chaos" data-attr2="Editorial">Editorial </a></li>
                
                
                
        </ul>
    </div>
</div>
    <style></style>
    <section class="challenge-interface">
        <div class="challenge-body">
          <div class="challenge-container-element hidden challenge-container-elements-loading">
            <div class="gray block-center">
              <div style="background: url(https://d3keuzeb2crhkn.cloudfront.net/hackerrank/assets/hackerrank_spinner_64x64-eecdb2ab11e291dd74a8f1843ab0425c.gif); height: 64px; width: 64px; display: inline-block;"></div>
            </div>
          </div>
        <div class="challenge-body-elements-problem challenge-container-element"><div class="challenge-content"><div class="container fs-container">
    <div class="row">
        <div class="span-md-11 hr_tour-problem-statement problem-statement">
            
            
            
            <div class="content-text challenge-text mlB">
                <div class="challenge_problem_statement"><div class="msB challenge_problem_statement_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><p>It's New Year's Day and everyone's in line for the Wonderland rollercoaster ride! </p>

<p>There are <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-1-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.395ex" height="1.676ex" style="vertical-align: -0.338ex;" viewBox="0 -576.1 600.5 721.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M21 287Q22 293 24 303T36 341T56 388T89 425T135 442Q171 442 195 424T225 390T231 369Q231 367 232 367L243 378Q304 442 382 442Q436 442 469 415T503 336T465 179T427 52Q427 26 444 26Q450 26 453 27Q482 32 505 65T540 145Q542 153 560 153Q580 153 580 145Q580 144 576 130Q568 101 554 73T508 17T439 -10Q392 -10 371 17T350 73Q350 92 386 193T423 345Q423 404 379 404H374Q288 404 229 303L222 291L189 157Q156 26 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 112 180T152 343Q153 348 153 366Q153 405 129 405Q91 405 66 305Q60 285 60 284Q58 278 41 278H27Q21 284 21 287Z"></path></g></svg></span> people queued up, and each person wears a sticker indicating their <em>initial</em> position in the queue (i.e.: <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-2-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="16.355ex" height="2.509ex" style="vertical-align: -0.671ex;" viewBox="0 -791.3 7041.6 1080.4" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M213 578L200 573Q186 568 160 563T102 556H83V602H102Q149 604 189 617T245 641T273 663Q275 666 285 666Q294 666 302 660V361L303 61Q310 54 315 52T339 48T401 46H427V0H416Q395 3 257 3Q121 3 100 0H88V46H114Q136 46 152 46T177 47T193 50T201 52T207 57T213 61V578Z"></path><g transform="translate(500,0)"><path stroke-width="1" d="M78 35T78 60T94 103T137 121Q165 121 187 96T210 8Q210 -27 201 -60T180 -117T154 -158T130 -185T117 -194Q113 -194 104 -185T95 -172Q95 -168 106 -156T131 -126T157 -76T173 -3V9L172 8Q170 7 167 6T161 3T152 1T140 0Q113 0 96 17Z"></path></g><g transform="translate(945,0)"><path stroke-width="1" d="M109 429Q82 429 66 447T50 491Q50 562 103 614T235 666Q326 666 387 610T449 465Q449 422 429 383T381 315T301 241Q265 210 201 149L142 93L218 92Q375 92 385 97Q392 99 409 186V189H449V186Q448 183 436 95T421 3V0H50V19V31Q50 38 56 46T86 81Q115 113 136 137Q145 147 170 174T204 211T233 244T261 278T284 308T305 340T320 369T333 401T340 431T343 464Q343 527 309 573T212 619Q179 619 154 602T119 569T109 550Q109 549 114 549Q132 549 151 535T170 489Q170 464 154 447T109 429Z"></path></g><g transform="translate(1446,0)"><path stroke-width="1" d="M78 35T78 60T94 103T137 121Q165 121 187 96T210 8Q210 -27 201 -60T180 -117T154 -158T130 -185T117 -194Q113 -194 104 -185T95 -172Q95 -168 106 -156T131 -126T157 -76T173 -3V9L172 8Q170 7 167 6T161 3T152 1T140 0Q113 0 96 17Z"></path></g><g transform="translate(1891,0)"><path stroke-width="1" d="M78 60Q78 84 95 102T138 120Q162 120 180 104T199 61Q199 36 182 18T139 0T96 17T78 60Z"></path></g><g transform="translate(2336,0)"><path stroke-width="1" d="M78 60Q78 84 95 102T138 120Q162 120 180 104T199 61Q199 36 182 18T139 0T96 17T78 60Z"></path></g><g transform="translate(2781,0)"><path stroke-width="1" d="M78 60Q78 84 95 102T138 120Q162 120 180 104T199 61Q199 36 182 18T139 0T96 17T78 60Z"></path></g><g transform="translate(3226,0)"><path stroke-width="1" d="M78 35T78 60T94 103T137 121Q165 121 187 96T210 8Q210 -27 201 -60T180 -117T154 -158T130 -185T117 -194Q113 -194 104 -185T95 -172Q95 -168 106 -156T131 -126T157 -76T173 -3V9L172 8Q170 7 167 6T161 3T152 1T140 0Q113 0 96 17Z"></path></g><g transform="translate(3671,0)"><path stroke-width="1" d="M21 287Q22 293 24 303T36 341T56 388T89 425T135 442Q171 442 195 424T225 390T231 369Q231 367 232 367L243 378Q304 442 382 442Q436 442 469 415T503 336T465 179T427 52Q427 26 444 26Q450 26 453 27Q482 32 505 65T540 145Q542 153 560 153Q580 153 580 145Q580 144 576 130Q568 101 554 73T508 17T439 -10Q392 -10 371 17T350 73Q350 92 386 193T423 345Q423 404 379 404H374Q288 404 229 303L222 291L189 157Q156 26 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 112 180T152 343Q153 348 153 366Q153 405 129 405Q91 405 66 305Q60 285 60 284Q58 278 41 278H27Q21 284 21 287Z"></path></g><g transform="translate(4494,0)"><path stroke-width="1" d="M84 237T84 250T98 270H679Q694 262 694 250T679 230H98Q84 237 84 250Z"></path></g><g transform="translate(5495,0)"><path stroke-width="1" d="M213 578L200 573Q186 568 160 563T102 556H83V602H102Q149 604 189 617T245 641T273 663Q275 666 285 666Q294 666 302 660V361L303 61Q310 54 315 52T339 48T401 46H427V0H416Q395 3 257 3Q121 3 100 0H88V46H114Q136 46 152 46T177 47T193 50T201 52T207 57T213 61V578Z"></path></g><g transform="translate(5995,0)"><path stroke-width="1" d="M78 35T78 60T94 103T137 121Q165 121 187 96T210 8Q210 -27 201 -60T180 -117T154 -158T130 -185T117 -194Q113 -194 104 -185T95 -172Q95 -168 106 -156T131 -126T157 -76T173 -3V9L172 8Q170 7 167 6T161 3T152 1T140 0Q113 0 96 17Z"></path></g><g transform="translate(6441,0)"><path stroke-width="1" d="M21 287Q22 293 24 303T36 341T56 388T89 425T135 442Q171 442 195 424T225 390T231 369Q231 367 232 367L243 378Q304 442 382 442Q436 442 469 415T503 336T465 179T427 52Q427 26 444 26Q450 26 453 27Q482 32 505 65T540 145Q542 153 560 153Q580 153 580 145Q580 144 576 130Q568 101 554 73T508 17T439 -10Q392 -10 371 17T350 73Q350 92 386 193T423 345Q423 404 379 404H374Q288 404 229 303L222 291L189 157Q156 26 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 112 180T152 343Q153 348 153 366Q153 405 129 405Q91 405 66 305Q60 285 60 284Q58 278 41 278H27Q21 284 21 287Z"></path></g></g></svg></span> with the first number denoting the frontmost position).</p>

<p>Any person in the queue can bribe the person <em>directly in front</em> of them to swap positions. If two people swap positions, they still wear the same sticker denoting their original place in line. One person can bribe <em>at most two other persons</em>.</p>

<p>That is to say, if <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-3-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="5.656ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 2435.1 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M21 287Q22 293 24 303T36 341T56 388T89 425T135 442Q171 442 195 424T225 390T231 369Q231 367 232 367L243 378Q304 442 382 442Q436 442 469 415T503 336T465 179T427 52Q427 26 444 26Q450 26 453 27Q482 32 505 65T540 145Q542 153 560 153Q580 153 580 145Q580 144 576 130Q568 101 554 73T508 17T439 -10Q392 -10 371 17T350 73Q350 92 386 193T423 345Q423 404 379 404H374Q288 404 229 303L222 291L189 157Q156 26 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 112 180T152 343Q153 348 153 366Q153 405 129 405Q91 405 66 305Q60 285 60 284Q58 278 41 278H27Q21 284 21 287Z"></path><g transform="translate(878,0)"><path stroke-width="1" d="M56 347Q56 360 70 367H707Q722 359 722 347Q722 336 708 328L390 327H72Q56 332 56 347ZM56 153Q56 168 72 173H708Q722 163 722 153Q722 140 707 133H70Q56 140 56 153Z"></path></g><g transform="translate(1934,0)"><path stroke-width="1" d="M70 417T70 494T124 618T248 666Q319 666 374 624T429 515Q429 485 418 459T392 417T361 389T335 371T324 363L338 354Q352 344 366 334T382 323Q457 264 457 174Q457 95 399 37T249 -22Q159 -22 101 29T43 155Q43 263 172 335L154 348Q133 361 127 368Q70 417 70 494ZM286 386L292 390Q298 394 301 396T311 403T323 413T334 425T345 438T355 454T364 471T369 491T371 513Q371 556 342 586T275 624Q268 625 242 625Q201 625 165 599T128 534Q128 511 141 492T167 463T217 431Q224 426 228 424L286 386ZM250 21Q308 21 350 55T392 137Q392 154 387 169T375 194T353 216T330 234T301 253T274 270Q260 279 244 289T218 306L210 311Q204 311 181 294T133 239T107 157Q107 98 150 60T250 21Z"></path></g></g></svg></span> and <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-4-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="9.233ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 3975.5 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M287 628Q287 635 230 637Q206 637 199 638T192 648Q192 649 194 659Q200 679 203 681T397 683Q587 682 600 680Q664 669 707 631T751 530Q751 453 685 389Q616 321 507 303Q500 302 402 301H307L277 182Q247 66 247 59Q247 55 248 54T255 50T272 48T305 46H336Q342 37 342 35Q342 19 335 5Q330 0 319 0Q316 0 282 1T182 2Q120 2 87 2T51 1Q33 1 33 11Q33 13 36 25Q40 41 44 43T67 46Q94 46 127 49Q141 52 146 61Q149 65 218 339T287 628ZM645 554Q645 567 643 575T634 597T609 619T560 635Q553 636 480 637Q463 637 445 637T416 636T404 636Q391 635 386 627Q384 621 367 550T332 412T314 344Q314 342 395 342H407H430Q542 342 590 392Q617 419 631 471T645 554Z"></path><g transform="translate(751,0)"><path stroke-width="1" d="M39 168Q39 225 58 272T107 350T174 402T244 433T307 442H310Q355 442 388 420T421 355Q421 265 310 237Q261 224 176 223Q139 223 138 221Q138 219 132 186T125 128Q125 81 146 54T209 26T302 45T394 111Q403 121 406 121Q410 121 419 112T429 98T420 82T390 55T344 24T281 -1T205 -11Q126 -11 83 42T39 168ZM373 353Q367 405 305 405Q272 405 244 391T199 357T170 316T154 280T149 261Q149 260 169 260Q282 260 327 284T373 353Z"></path></g><g transform="translate(1218,0)"><path stroke-width="1" d="M21 287Q22 290 23 295T28 317T38 348T53 381T73 411T99 433T132 442Q161 442 183 430T214 408T225 388Q227 382 228 382T236 389Q284 441 347 441H350Q398 441 422 400Q430 381 430 363Q430 333 417 315T391 292T366 288Q346 288 334 299T322 328Q322 376 378 392Q356 405 342 405Q286 405 239 331Q229 315 224 298T190 165Q156 25 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 114 189T154 366Q154 405 128 405Q107 405 92 377T68 316T57 280Q55 278 41 278H27Q21 284 21 287Z"></path></g><g transform="translate(1669,0)"><path stroke-width="1" d="M131 289Q131 321 147 354T203 415T300 442Q362 442 390 415T419 355Q419 323 402 308T364 292Q351 292 340 300T328 326Q328 342 337 354T354 372T367 378Q368 378 368 379Q368 382 361 388T336 399T297 405Q249 405 227 379T204 326Q204 301 223 291T278 274T330 259Q396 230 396 163Q396 135 385 107T352 51T289 7T195 -10Q118 -10 86 19T53 87Q53 126 74 143T118 160Q133 160 146 151T160 120Q160 94 142 76T111 58Q109 57 108 57T107 55Q108 52 115 47T146 34T201 27Q237 27 263 38T301 66T318 97T323 122Q323 150 302 164T254 181T195 196T148 231Q131 256 131 289Z"></path></g><g transform="translate(2139,0)"><path stroke-width="1" d="M201 -11Q126 -11 80 38T34 156Q34 221 64 279T146 380Q222 441 301 441Q333 441 341 440Q354 437 367 433T402 417T438 387T464 338T476 268Q476 161 390 75T201 -11ZM121 120Q121 70 147 48T206 26Q250 26 289 58T351 142Q360 163 374 216T388 308Q388 352 370 375Q346 405 306 405Q243 405 195 347Q158 303 140 230T121 120Z"></path></g><g transform="translate(2624,0)"><path stroke-width="1" d="M21 287Q22 293 24 303T36 341T56 388T89 425T135 442Q171 442 195 424T225 390T231 369Q231 367 232 367L243 378Q304 442 382 442Q436 442 469 415T503 336T465 179T427 52Q427 26 444 26Q450 26 453 27Q482 32 505 65T540 145Q542 153 560 153Q580 153 580 145Q580 144 576 130Q568 101 554 73T508 17T439 -10Q392 -10 371 17T350 73Q350 92 386 193T423 345Q423 404 379 404H374Q288 404 229 303L222 291L189 157Q156 26 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 112 180T152 343Q153 348 153 366Q153 405 129 405Q91 405 66 305Q60 285 60 284Q58 278 41 278H27Q21 284 21 287Z"></path></g><g transform="translate(3475,0)"><path stroke-width="1" d="M164 157Q164 133 148 117T109 101H102Q148 22 224 22Q294 22 326 82Q345 115 345 210Q345 313 318 349Q292 382 260 382H254Q176 382 136 314Q132 307 129 306T114 304Q97 304 95 310Q93 314 93 485V614Q93 664 98 664Q100 666 102 666Q103 666 123 658T178 642T253 634Q324 634 389 662Q397 666 402 666Q410 666 410 648V635Q328 538 205 538Q174 538 149 544L139 546V374Q158 388 169 396T205 412T256 420Q337 420 393 355T449 201Q449 109 385 44T229 -22Q148 -22 99 32T50 154Q50 178 61 192T84 210T107 214Q132 214 148 197T164 157Z"></path></g></g></svg></span> bribes <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-5-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="9.233ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 3975.5 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M287 628Q287 635 230 637Q206 637 199 638T192 648Q192 649 194 659Q200 679 203 681T397 683Q587 682 600 680Q664 669 707 631T751 530Q751 453 685 389Q616 321 507 303Q500 302 402 301H307L277 182Q247 66 247 59Q247 55 248 54T255 50T272 48T305 46H336Q342 37 342 35Q342 19 335 5Q330 0 319 0Q316 0 282 1T182 2Q120 2 87 2T51 1Q33 1 33 11Q33 13 36 25Q40 41 44 43T67 46Q94 46 127 49Q141 52 146 61Q149 65 218 339T287 628ZM645 554Q645 567 643 575T634 597T609 619T560 635Q553 636 480 637Q463 637 445 637T416 636T404 636Q391 635 386 627Q384 621 367 550T332 412T314 344Q314 342 395 342H407H430Q542 342 590 392Q617 419 631 471T645 554Z"></path><g transform="translate(751,0)"><path stroke-width="1" d="M39 168Q39 225 58 272T107 350T174 402T244 433T307 442H310Q355 442 388 420T421 355Q421 265 310 237Q261 224 176 223Q139 223 138 221Q138 219 132 186T125 128Q125 81 146 54T209 26T302 45T394 111Q403 121 406 121Q410 121 419 112T429 98T420 82T390 55T344 24T281 -1T205 -11Q126 -11 83 42T39 168ZM373 353Q367 405 305 405Q272 405 244 391T199 357T170 316T154 280T149 261Q149 260 169 260Q282 260 327 284T373 353Z"></path></g><g transform="translate(1218,0)"><path stroke-width="1" d="M21 287Q22 290 23 295T28 317T38 348T53 381T73 411T99 433T132 442Q161 442 183 430T214 408T225 388Q227 382 228 382T236 389Q284 441 347 441H350Q398 441 422 400Q430 381 430 363Q430 333 417 315T391 292T366 288Q346 288 334 299T322 328Q322 376 378 392Q356 405 342 405Q286 405 239 331Q229 315 224 298T190 165Q156 25 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 114 189T154 366Q154 405 128 405Q107 405 92 377T68 316T57 280Q55 278 41 278H27Q21 284 21 287Z"></path></g><g transform="translate(1669,0)"><path stroke-width="1" d="M131 289Q131 321 147 354T203 415T300 442Q362 442 390 415T419 355Q419 323 402 308T364 292Q351 292 340 300T328 326Q328 342 337 354T354 372T367 378Q368 378 368 379Q368 382 361 388T336 399T297 405Q249 405 227 379T204 326Q204 301 223 291T278 274T330 259Q396 230 396 163Q396 135 385 107T352 51T289 7T195 -10Q118 -10 86 19T53 87Q53 126 74 143T118 160Q133 160 146 151T160 120Q160 94 142 76T111 58Q109 57 108 57T107 55Q108 52 115 47T146 34T201 27Q237 27 263 38T301 66T318 97T323 122Q323 150 302 164T254 181T195 196T148 231Q131 256 131 289Z"></path></g><g transform="translate(2139,0)"><path stroke-width="1" d="M201 -11Q126 -11 80 38T34 156Q34 221 64 279T146 380Q222 441 301 441Q333 441 341 440Q354 437 367 433T402 417T438 387T464 338T476 268Q476 161 390 75T201 -11ZM121 120Q121 70 147 48T206 26Q250 26 289 58T351 142Q360 163 374 216T388 308Q388 352 370 375Q346 405 306 405Q243 405 195 347Q158 303 140 230T121 120Z"></path></g><g transform="translate(2624,0)"><path stroke-width="1" d="M21 287Q22 293 24 303T36 341T56 388T89 425T135 442Q171 442 195 424T225 390T231 369Q231 367 232 367L243 378Q304 442 382 442Q436 442 469 415T503 336T465 179T427 52Q427 26 444 26Q450 26 453 27Q482 32 505 65T540 145Q542 153 560 153Q580 153 580 145Q580 144 576 130Q568 101 554 73T508 17T439 -10Q392 -10 371 17T350 73Q350 92 386 193T423 345Q423 404 379 404H374Q288 404 229 303L222 291L189 157Q156 26 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 112 180T152 343Q153 348 153 366Q153 405 129 405Q91 405 66 305Q60 285 60 284Q58 278 41 278H27Q21 284 21 287Z"></path></g><g transform="translate(3475,0)"><path stroke-width="1" d="M462 0Q444 3 333 3Q217 3 199 0H190V46H221Q241 46 248 46T265 48T279 53T286 61Q287 63 287 115V165H28V211L179 442Q332 674 334 675Q336 677 355 677H373L379 671V211H471V165H379V114Q379 73 379 66T385 54Q393 47 442 46H471V0H462ZM293 211V545L74 212L183 211H293Z"></path></g></g></svg></span>, the queue will look like this: <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-6-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="16.537ex" height="2.509ex" style="vertical-align: -0.671ex;" viewBox="0 -791.3 7120.2 1080.4" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M213 578L200 573Q186 568 160 563T102 556H83V602H102Q149 604 189 617T245 641T273 663Q275 666 285 666Q294 666 302 660V361L303 61Q310 54 315 52T339 48T401 46H427V0H416Q395 3 257 3Q121 3 100 0H88V46H114Q136 46 152 46T177 47T193 50T201 52T207 57T213 61V578Z"></path><g transform="translate(500,0)"><path stroke-width="1" d="M78 35T78 60T94 103T137 121Q165 121 187 96T210 8Q210 -27 201 -60T180 -117T154 -158T130 -185T117 -194Q113 -194 104 -185T95 -172Q95 -168 106 -156T131 -126T157 -76T173 -3V9L172 8Q170 7 167 6T161 3T152 1T140 0Q113 0 96 17Z"></path></g><g transform="translate(945,0)"><path stroke-width="1" d="M109 429Q82 429 66 447T50 491Q50 562 103 614T235 666Q326 666 387 610T449 465Q449 422 429 383T381 315T301 241Q265 210 201 149L142 93L218 92Q375 92 385 97Q392 99 409 186V189H449V186Q448 183 436 95T421 3V0H50V19V31Q50 38 56 46T86 81Q115 113 136 137Q145 147 170 174T204 211T233 244T261 278T284 308T305 340T320 369T333 401T340 431T343 464Q343 527 309 573T212 619Q179 619 154 602T119 569T109 550Q109 549 114 549Q132 549 151 535T170 489Q170 464 154 447T109 429Z"></path></g><g transform="translate(1446,0)"><path stroke-width="1" d="M78 35T78 60T94 103T137 121Q165 121 187 96T210 8Q210 -27 201 -60T180 -117T154 -158T130 -185T117 -194Q113 -194 104 -185T95 -172Q95 -168 106 -156T131 -126T157 -76T173 -3V9L172 8Q170 7 167 6T161 3T152 1T140 0Q113 0 96 17Z"></path></g><g transform="translate(1891,0)"><path stroke-width="1" d="M127 463Q100 463 85 480T69 524Q69 579 117 622T233 665Q268 665 277 664Q351 652 390 611T430 522Q430 470 396 421T302 350L299 348Q299 347 308 345T337 336T375 315Q457 262 457 175Q457 96 395 37T238 -22Q158 -22 100 21T42 130Q42 158 60 175T105 193Q133 193 151 175T169 130Q169 119 166 110T159 94T148 82T136 74T126 70T118 67L114 66Q165 21 238 21Q293 21 321 74Q338 107 338 175V195Q338 290 274 322Q259 328 213 329L171 330L168 332Q166 335 166 348Q166 366 174 366Q202 366 232 371Q266 376 294 413T322 525V533Q322 590 287 612Q265 626 240 626Q208 626 181 615T143 592T132 580H135Q138 579 143 578T153 573T165 566T175 555T183 540T186 520Q186 498 172 481T127 463Z"></path></g><g transform="translate(2391,0)"><path stroke-width="1" d="M78 35T78 60T94 103T137 121Q165 121 187 96T210 8Q210 -27 201 -60T180 -117T154 -158T130 -185T117 -194Q113 -194 104 -185T95 -172Q95 -168 106 -156T131 -126T157 -76T173 -3V9L172 8Q170 7 167 6T161 3T152 1T140 0Q113 0 96 17Z"></path></g><g transform="translate(2836,0)"><path stroke-width="1" d="M164 157Q164 133 148 117T109 101H102Q148 22 224 22Q294 22 326 82Q345 115 345 210Q345 313 318 349Q292 382 260 382H254Q176 382 136 314Q132 307 129 306T114 304Q97 304 95 310Q93 314 93 485V614Q93 664 98 664Q100 666 102 666Q103 666 123 658T178 642T253 634Q324 634 389 662Q397 666 402 666Q410 666 410 648V635Q328 538 205 538Q174 538 149 544L139 546V374Q158 388 169 396T205 412T256 420Q337 420 393 355T449 201Q449 109 385 44T229 -22Q148 -22 99 32T50 154Q50 178 61 192T84 210T107 214Q132 214 148 197T164 157Z"></path></g><g transform="translate(3337,0)"><path stroke-width="1" d="M78 35T78 60T94 103T137 121Q165 121 187 96T210 8Q210 -27 201 -60T180 -117T154 -158T130 -185T117 -194Q113 -194 104 -185T95 -172Q95 -168 106 -156T131 -126T157 -76T173 -3V9L172 8Q170 7 167 6T161 3T152 1T140 0Q113 0 96 17Z"></path></g><g transform="translate(3782,0)"><path stroke-width="1" d="M462 0Q444 3 333 3Q217 3 199 0H190V46H221Q241 46 248 46T265 48T279 53T286 61Q287 63 287 115V165H28V211L179 442Q332 674 334 675Q336 677 355 677H373L379 671V211H471V165H379V114Q379 73 379 66T385 54Q393 47 442 46H471V0H462ZM293 211V545L74 212L183 211H293Z"></path></g><g transform="translate(4283,0)"><path stroke-width="1" d="M78 35T78 60T94 103T137 121Q165 121 187 96T210 8Q210 -27 201 -60T180 -117T154 -158T130 -185T117 -194Q113 -194 104 -185T95 -172Q95 -168 106 -156T131 -126T157 -76T173 -3V9L172 8Q170 7 167 6T161 3T152 1T140 0Q113 0 96 17Z"></path></g><g transform="translate(4728,0)"><path stroke-width="1" d="M42 313Q42 476 123 571T303 666Q372 666 402 630T432 550Q432 525 418 510T379 495Q356 495 341 509T326 548Q326 592 373 601Q351 623 311 626Q240 626 194 566Q147 500 147 364L148 360Q153 366 156 373Q197 433 263 433H267Q313 433 348 414Q372 400 396 374T435 317Q456 268 456 210V192Q456 169 451 149Q440 90 387 34T253 -22Q225 -22 199 -14T143 16T92 75T56 172T42 313ZM257 397Q227 397 205 380T171 335T154 278T148 216Q148 133 160 97T198 39Q222 21 251 21Q302 21 329 59Q342 77 347 104T352 209Q352 289 347 316T329 361Q302 397 257 397Z"></path></g><g transform="translate(5228,0)"><path stroke-width="1" d="M78 35T78 60T94 103T137 121Q165 121 187 96T210 8Q210 -27 201 -60T180 -117T154 -158T130 -185T117 -194Q113 -194 104 -185T95 -172Q95 -168 106 -156T131 -126T157 -76T173 -3V9L172 8Q170 7 167 6T161 3T152 1T140 0Q113 0 96 17Z"></path></g><g transform="translate(5674,0)"><path stroke-width="1" d="M55 458Q56 460 72 567L88 674Q88 676 108 676H128V672Q128 662 143 655T195 646T364 644H485V605L417 512Q408 500 387 472T360 435T339 403T319 367T305 330T292 284T284 230T278 162T275 80Q275 66 275 52T274 28V19Q270 2 255 -10T221 -22Q210 -22 200 -19T179 0T168 40Q168 198 265 368Q285 400 349 489L395 552H302Q128 552 119 546Q113 543 108 522T98 479L95 458V455H55V458Z"></path></g><g transform="translate(6174,0)"><path stroke-width="1" d="M78 35T78 60T94 103T137 121Q165 121 187 96T210 8Q210 -27 201 -60T180 -117T154 -158T130 -185T117 -194Q113 -194 104 -185T95 -172Q95 -168 106 -156T131 -126T157 -76T173 -3V9L172 8Q170 7 167 6T161 3T152 1T140 0Q113 0 96 17Z"></path></g><g transform="translate(6619,0)"><path stroke-width="1" d="M70 417T70 494T124 618T248 666Q319 666 374 624T429 515Q429 485 418 459T392 417T361 389T335 371T324 363L338 354Q352 344 366 334T382 323Q457 264 457 174Q457 95 399 37T249 -22Q159 -22 101 29T43 155Q43 263 172 335L154 348Q133 361 127 368Q70 417 70 494ZM286 386L292 390Q298 394 301 396T311 403T323 413T334 425T345 438T355 454T364 471T369 491T371 513Q371 556 342 586T275 624Q268 625 242 625Q201 625 165 599T128 534Q128 511 141 492T167 463T217 431Q224 426 228 424L286 386ZM250 21Q308 21 350 55T392 137Q392 154 387 169T375 194T353 216T330 234T301 253T274 270Q260 279 244 289T218 306L210 311Q204 311 181 294T133 239T107 157Q107 98 150 60T250 21Z"></path></g></g></svg></span>.</p>

<p>Fascinated by this chaotic queue, you decide you must know the minimum number of bribes that took place to get the queue into its current state!</p>

<p><strong>Note:</strong> Each <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-7-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="10.051ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 4327.5 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M287 628Q287 635 230 637Q206 637 199 638T192 648Q192 649 194 659Q200 679 203 681T397 683Q587 682 600 680Q664 669 707 631T751 530Q751 453 685 389Q616 321 507 303Q500 302 402 301H307L277 182Q247 66 247 59Q247 55 248 54T255 50T272 48T305 46H336Q342 37 342 35Q342 19 335 5Q330 0 319 0Q316 0 282 1T182 2Q120 2 87 2T51 1Q33 1 33 11Q33 13 36 25Q40 41 44 43T67 46Q94 46 127 49Q141 52 146 61Q149 65 218 339T287 628ZM645 554Q645 567 643 575T634 597T609 619T560 635Q553 636 480 637Q463 637 445 637T416 636T404 636Q391 635 386 627Q384 621 367 550T332 412T314 344Q314 342 395 342H407H430Q542 342 590 392Q617 419 631 471T645 554Z"></path><g transform="translate(751,0)"><path stroke-width="1" d="M39 168Q39 225 58 272T107 350T174 402T244 433T307 442H310Q355 442 388 420T421 355Q421 265 310 237Q261 224 176 223Q139 223 138 221Q138 219 132 186T125 128Q125 81 146 54T209 26T302 45T394 111Q403 121 406 121Q410 121 419 112T429 98T420 82T390 55T344 24T281 -1T205 -11Q126 -11 83 42T39 168ZM373 353Q367 405 305 405Q272 405 244 391T199 357T170 316T154 280T149 261Q149 260 169 260Q282 260 327 284T373 353Z"></path></g><g transform="translate(1218,0)"><path stroke-width="1" d="M21 287Q22 290 23 295T28 317T38 348T53 381T73 411T99 433T132 442Q161 442 183 430T214 408T225 388Q227 382 228 382T236 389Q284 441 347 441H350Q398 441 422 400Q430 381 430 363Q430 333 417 315T391 292T366 288Q346 288 334 299T322 328Q322 376 378 392Q356 405 342 405Q286 405 239 331Q229 315 224 298T190 165Q156 25 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 114 189T154 366Q154 405 128 405Q107 405 92 377T68 316T57 280Q55 278 41 278H27Q21 284 21 287Z"></path></g><g transform="translate(1669,0)"><path stroke-width="1" d="M131 289Q131 321 147 354T203 415T300 442Q362 442 390 415T419 355Q419 323 402 308T364 292Q351 292 340 300T328 326Q328 342 337 354T354 372T367 378Q368 378 368 379Q368 382 361 388T336 399T297 405Q249 405 227 379T204 326Q204 301 223 291T278 274T330 259Q396 230 396 163Q396 135 385 107T352 51T289 7T195 -10Q118 -10 86 19T53 87Q53 126 74 143T118 160Q133 160 146 151T160 120Q160 94 142 76T111 58Q109 57 108 57T107 55Q108 52 115 47T146 34T201 27Q237 27 263 38T301 66T318 97T323 122Q323 150 302 164T254 181T195 196T148 231Q131 256 131 289Z"></path></g><g transform="translate(2139,0)"><path stroke-width="1" d="M201 -11Q126 -11 80 38T34 156Q34 221 64 279T146 380Q222 441 301 441Q333 441 341 440Q354 437 367 433T402 417T438 387T464 338T476 268Q476 161 390 75T201 -11ZM121 120Q121 70 147 48T206 26Q250 26 289 58T351 142Q360 163 374 216T388 308Q388 352 370 375Q346 405 306 405Q243 405 195 347Q158 303 140 230T121 120Z"></path></g><g transform="translate(2624,0)"><path stroke-width="1" d="M21 287Q22 293 24 303T36 341T56 388T89 425T135 442Q171 442 195 424T225 390T231 369Q231 367 232 367L243 378Q304 442 382 442Q436 442 469 415T503 336T465 179T427 52Q427 26 444 26Q450 26 453 27Q482 32 505 65T540 145Q542 153 560 153Q580 153 580 145Q580 144 576 130Q568 101 554 73T508 17T439 -10Q392 -10 371 17T350 73Q350 92 386 193T423 345Q423 404 379 404H374Q288 404 229 303L222 291L189 157Q156 26 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 112 180T152 343Q153 348 153 366Q153 405 129 405Q91 405 66 305Q60 285 60 284Q58 278 41 278H27Q21 284 21 287Z"></path></g><g transform="translate(3475,0)"><path stroke-width="1" d="M42 0H40Q26 0 26 11Q26 15 29 27Q33 41 36 43T55 46Q141 49 190 98Q200 108 306 224T411 342Q302 620 297 625Q288 636 234 637H206Q200 643 200 645T202 664Q206 677 212 683H226Q260 681 347 681Q380 681 408 681T453 682T473 682Q490 682 490 671Q490 670 488 658Q484 643 481 640T465 637Q434 634 411 620L488 426L541 485Q646 598 646 610Q646 628 622 635Q617 635 609 637Q594 637 594 648Q594 650 596 664Q600 677 606 683H618Q619 683 643 683T697 681T738 680Q828 680 837 683H845Q852 676 852 672Q850 647 840 637H824Q790 636 763 628T722 611T698 593L687 584Q687 585 592 480L505 384Q505 383 536 304T601 142T638 56Q648 47 699 46Q734 46 734 37Q734 35 732 23Q728 7 725 4T711 1Q708 1 678 1T589 2Q528 2 496 2T461 1Q444 1 444 10Q444 11 446 25Q448 35 450 39T455 44T464 46T480 47T506 54Q523 62 523 64Q522 64 476 181L429 299Q241 95 236 84Q232 76 232 72Q232 53 261 47Q262 47 267 47T273 46Q276 46 277 46T280 45T283 42T284 35Q284 26 282 19Q279 6 276 4T261 1Q258 1 243 1T201 2T142 2Q64 2 42 0Z"></path></g></g></svg></span> wears sticker <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-8-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.98ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 852.5 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M42 0H40Q26 0 26 11Q26 15 29 27Q33 41 36 43T55 46Q141 49 190 98Q200 108 306 224T411 342Q302 620 297 625Q288 636 234 637H206Q200 643 200 645T202 664Q206 677 212 683H226Q260 681 347 681Q380 681 408 681T453 682T473 682Q490 682 490 671Q490 670 488 658Q484 643 481 640T465 637Q434 634 411 620L488 426L541 485Q646 598 646 610Q646 628 622 635Q617 635 609 637Q594 637 594 648Q594 650 596 664Q600 677 606 683H618Q619 683 643 683T697 681T738 680Q828 680 837 683H845Q852 676 852 672Q850 647 840 637H824Q790 636 763 628T722 611T698 593L687 584Q687 585 592 480L505 384Q505 383 536 304T601 142T638 56Q648 47 699 46Q734 46 734 37Q734 35 732 23Q728 7 725 4T711 1Q708 1 678 1T589 2Q528 2 496 2T461 1Q444 1 444 10Q444 11 446 25Q448 35 450 39T455 44T464 46T480 47T506 54Q523 62 523 64Q522 64 476 181L429 299Q241 95 236 84Q232 76 232 72Q232 53 261 47Q262 47 267 47T273 46Q276 46 277 46T280 45T283 42T284 35Q284 26 282 19Q279 6 276 4T261 1Q258 1 243 1T201 2T142 2Q64 2 42 0Z"></path></g></svg></span>, meaning they were initially the <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-9-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="3.77ex" height="2.509ex" style="vertical-align: -0.338ex;" viewBox="0 -934.9 1623 1080.4" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M42 0H40Q26 0 26 11Q26 15 29 27Q33 41 36 43T55 46Q141 49 190 98Q200 108 306 224T411 342Q302 620 297 625Q288 636 234 637H206Q200 643 200 645T202 664Q206 677 212 683H226Q260 681 347 681Q380 681 408 681T453 682T473 682Q490 682 490 671Q490 670 488 658Q484 643 481 640T465 637Q434 634 411 620L488 426L541 485Q646 598 646 610Q646 628 622 635Q617 635 609 637Q594 637 594 648Q594 650 596 664Q600 677 606 683H618Q619 683 643 683T697 681T738 680Q828 680 837 683H845Q852 676 852 672Q850 647 840 637H824Q790 636 763 628T722 611T698 593L687 584Q687 585 592 480L505 384Q505 383 536 304T601 142T638 56Q648 47 699 46Q734 46 734 37Q734 35 732 23Q728 7 725 4T711 1Q708 1 678 1T589 2Q528 2 496 2T461 1Q444 1 444 10Q444 11 446 25Q448 35 450 39T455 44T464 46T480 47T506 54Q523 62 523 64Q522 64 476 181L429 299Q241 95 236 84Q232 76 232 72Q232 53 261 47Q262 47 267 47T273 46Q276 46 277 46T280 45T283 42T284 35Q284 26 282 19Q279 6 276 4T261 1Q258 1 243 1T201 2T142 2Q64 2 42 0Z"></path><g transform="translate(859,362)"><path stroke-width="1" transform="scale(0.707)" d="M26 385Q19 392 19 395Q19 399 22 411T27 425Q29 430 36 430T87 431H140L159 511Q162 522 166 540T173 566T179 586T187 603T197 615T211 624T229 626Q247 625 254 615T261 596Q261 589 252 549T232 470L222 433Q222 431 272 431H323Q330 424 330 420Q330 398 317 385H210L174 240Q135 80 135 68Q135 26 162 26Q197 26 230 60T283 144Q285 150 288 151T303 153H307Q322 153 322 145Q322 142 319 133Q314 117 301 95T267 48T216 6T155 -11Q125 -11 98 4T59 56Q57 64 57 83V101L92 241Q127 382 128 383Q128 385 77 385H26Z"></path><g transform="translate(255,0)"><path stroke-width="1" transform="scale(0.707)" d="M137 683Q138 683 209 688T282 694Q294 694 294 685Q294 674 258 534Q220 386 220 383Q220 381 227 388Q288 442 357 442Q411 442 444 415T478 336Q478 285 440 178T402 50Q403 36 407 31T422 26Q450 26 474 56T513 138Q516 149 519 151T535 153Q555 153 555 145Q555 144 551 130Q535 71 500 33Q466 -10 419 -10H414Q367 -10 346 17T325 74Q325 90 361 192T398 345Q398 404 354 404H349Q266 404 205 306L198 293L164 158Q132 28 127 16Q114 -11 83 -11Q69 -11 59 -2T48 16Q48 30 121 320L195 616Q195 629 188 632T149 637H128Q122 643 122 645T124 664Q129 683 137 683Z"></path></g></g></g></svg></span> person in queue.</p></div></div></div><div class="challenge_input_format"><div class="msB challenge_input_format_title"><p><strong>Input Format</strong></p></div><div class="msB challenge_input_format_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><p>The first line contains an integer, <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-1-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.636ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 704.5 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M40 437Q21 437 21 445Q21 450 37 501T71 602L88 651Q93 669 101 677H569H659Q691 677 697 676T704 667Q704 661 687 553T668 444Q668 437 649 437Q640 437 637 437T631 442L629 445Q629 451 635 490T641 551Q641 586 628 604T573 629Q568 630 515 631Q469 631 457 630T439 622Q438 621 368 343T298 60Q298 48 386 46Q418 46 427 45T436 36Q436 31 433 22Q429 4 424 1L422 0Q419 0 415 0Q410 0 363 1T228 2Q99 2 64 0H49Q43 6 43 9T45 27Q49 40 55 46H83H94Q174 46 189 55Q190 56 191 56Q196 59 201 76T241 233Q258 301 269 344Q339 619 339 625Q339 630 310 630H279Q212 630 191 624Q146 614 121 583T67 467Q60 445 57 441T43 437H40Z"></path></g></svg></span>, denoting the number of test cases. <br>
Each test case is comprised of two lines; the first line has <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-2-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.395ex" height="1.676ex" style="vertical-align: -0.338ex;" viewBox="0 -576.1 600.5 721.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M21 287Q22 293 24 303T36 341T56 388T89 425T135 442Q171 442 195 424T225 390T231 369Q231 367 232 367L243 378Q304 442 382 442Q436 442 469 415T503 336T465 179T427 52Q427 26 444 26Q450 26 453 27Q482 32 505 65T540 145Q542 153 560 153Q580 153 580 145Q580 144 576 130Q568 101 554 73T508 17T439 -10Q392 -10 371 17T350 73Q350 92 386 193T423 345Q423 404 379 404H374Q288 404 229 303L222 291L189 157Q156 26 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 112 180T152 343Q153 348 153 366Q153 405 129 405Q91 405 66 305Q60 285 60 284Q58 278 41 278H27Q21 284 21 287Z"></path></g></svg></span> (an integer indicating the number of people in the queue), and the second line has <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-3-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.395ex" height="1.676ex" style="vertical-align: -0.338ex;" viewBox="0 -576.1 600.5 721.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M21 287Q22 293 24 303T36 341T56 388T89 425T135 442Q171 442 195 424T225 390T231 369Q231 367 232 367L243 378Q304 442 382 442Q436 442 469 415T503 336T465 179T427 52Q427 26 444 26Q450 26 453 27Q482 32 505 65T540 145Q542 153 560 153Q580 153 580 145Q580 144 576 130Q568 101 554 73T508 17T439 -10Q392 -10 371 17T350 73Q350 92 386 193T423 345Q423 404 379 404H374Q288 404 229 303L222 291L189 157Q156 26 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 112 180T152 343Q153 348 153 366Q153 405 129 405Q91 405 66 305Q60 285 60 284Q58 278 41 278H27Q21 284 21 287Z"></path></g></svg></span> space-separated integers describing the final state of the queue.</p>

<p><strong>Constraints</strong></p>

<p><span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-4-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="11.321ex" height="2.343ex" style="vertical-align: -0.505ex;" viewBox="0 -791.3 4874.1 1008.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M213 578L200 573Q186 568 160 563T102 556H83V602H102Q149 604 189 617T245 641T273 663Q275 666 285 666Q294 666 302 660V361L303 61Q310 54 315 52T339 48T401 46H427V0H416Q395 3 257 3Q121 3 100 0H88V46H114Q136 46 152 46T177 47T193 50T201 52T207 57T213 61V578Z"></path><g transform="translate(778,0)"><path stroke-width="1" d="M674 636Q682 636 688 630T694 615T687 601Q686 600 417 472L151 346L399 228Q687 92 691 87Q694 81 694 76Q694 58 676 56H670L382 192Q92 329 90 331Q83 336 83 348Q84 359 96 365Q104 369 382 500T665 634Q669 636 674 636ZM84 -118Q84 -108 99 -98H678Q694 -104 694 -118Q694 -130 679 -138H98Q84 -131 84 -118Z"></path></g><g transform="translate(1834,0)"><path stroke-width="1" d="M40 437Q21 437 21 445Q21 450 37 501T71 602L88 651Q93 669 101 677H569H659Q691 677 697 676T704 667Q704 661 687 553T668 444Q668 437 649 437Q640 437 637 437T631 442L629 445Q629 451 635 490T641 551Q641 586 628 604T573 629Q568 630 515 631Q469 631 457 630T439 622Q438 621 368 343T298 60Q298 48 386 46Q418 46 427 45T436 36Q436 31 433 22Q429 4 424 1L422 0Q419 0 415 0Q410 0 363 1T228 2Q99 2 64 0H49Q43 6 43 9T45 27Q49 40 55 46H83H94Q174 46 189 55Q190 56 191 56Q196 59 201 76T241 233Q258 301 269 344Q339 619 339 625Q339 630 310 630H279Q212 630 191 624Q146 614 121 583T67 467Q60 445 57 441T43 437H40Z"></path></g><g transform="translate(2816,0)"><path stroke-width="1" d="M674 636Q682 636 688 630T694 615T687 601Q686 600 417 472L151 346L399 228Q687 92 691 87Q694 81 694 76Q694 58 676 56H670L382 192Q92 329 90 331Q83 336 83 348Q84 359 96 365Q104 369 382 500T665 634Q669 636 674 636ZM84 -118Q84 -108 99 -98H678Q694 -104 694 -118Q694 -130 679 -138H98Q84 -131 84 -118Z"></path></g><g transform="translate(3873,0)"><path stroke-width="1" d="M213 578L200 573Q186 568 160 563T102 556H83V602H102Q149 604 189 617T245 641T273 663Q275 666 285 666Q294 666 302 660V361L303 61Q310 54 315 52T339 48T401 46H427V0H416Q395 3 257 3Q121 3 100 0H88V46H114Q136 46 152 46T177 47T193 50T201 52T207 57T213 61V578Z"></path><path stroke-width="1" d="M96 585Q152 666 249 666Q297 666 345 640T423 548Q460 465 460 320Q460 165 417 83Q397 41 362 16T301 -15T250 -22Q224 -22 198 -16T137 16T82 83Q39 165 39 320Q39 494 96 585ZM321 597Q291 629 250 629Q208 629 178 597Q153 571 145 525T137 333Q137 175 145 125T181 46Q209 16 250 16Q290 16 318 46Q347 76 354 130T362 333Q362 478 354 524T321 597Z" transform="translate(500,0)"></path></g></g></svg></span><br>
<span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-5-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="12.133ex" height="2.843ex" style="vertical-align: -0.505ex;" viewBox="0 -1006.6 5224 1223.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M213 578L200 573Q186 568 160 563T102 556H83V602H102Q149 604 189 617T245 641T273 663Q275 666 285 666Q294 666 302 660V361L303 61Q310 54 315 52T339 48T401 46H427V0H416Q395 3 257 3Q121 3 100 0H88V46H114Q136 46 152 46T177 47T193 50T201 52T207 57T213 61V578Z"></path><g transform="translate(778,0)"><path stroke-width="1" d="M674 636Q682 636 688 630T694 615T687 601Q686 600 417 472L151 346L399 228Q687 92 691 87Q694 81 694 76Q694 58 676 56H670L382 192Q92 329 90 331Q83 336 83 348Q84 359 96 365Q104 369 382 500T665 634Q669 636 674 636ZM84 -118Q84 -108 99 -98H678Q694 -104 694 -118Q694 -130 679 -138H98Q84 -131 84 -118Z"></path></g><g transform="translate(1834,0)"><path stroke-width="1" d="M21 287Q22 293 24 303T36 341T56 388T89 425T135 442Q171 442 195 424T225 390T231 369Q231 367 232 367L243 378Q304 442 382 442Q436 442 469 415T503 336T465 179T427 52Q427 26 444 26Q450 26 453 27Q482 32 505 65T540 145Q542 153 560 153Q580 153 580 145Q580 144 576 130Q568 101 554 73T508 17T439 -10Q392 -10 371 17T350 73Q350 92 386 193T423 345Q423 404 379 404H374Q288 404 229 303L222 291L189 157Q156 26 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 112 180T152 343Q153 348 153 366Q153 405 129 405Q91 405 66 305Q60 285 60 284Q58 278 41 278H27Q21 284 21 287Z"></path></g><g transform="translate(2712,0)"><path stroke-width="1" d="M674 636Q682 636 688 630T694 615T687 601Q686 600 417 472L151 346L399 228Q687 92 691 87Q694 81 694 76Q694 58 676 56H670L382 192Q92 329 90 331Q83 336 83 348Q84 359 96 365Q104 369 382 500T665 634Q669 636 674 636ZM84 -118Q84 -108 99 -98H678Q694 -104 694 -118Q694 -130 679 -138H98Q84 -131 84 -118Z"></path></g><g transform="translate(3769,0)"><path stroke-width="1" d="M213 578L200 573Q186 568 160 563T102 556H83V602H102Q149 604 189 617T245 641T273 663Q275 666 285 666Q294 666 302 660V361L303 61Q310 54 315 52T339 48T401 46H427V0H416Q395 3 257 3Q121 3 100 0H88V46H114Q136 46 152 46T177 47T193 50T201 52T207 57T213 61V578Z"></path><path stroke-width="1" d="M96 585Q152 666 249 666Q297 666 345 640T423 548Q460 465 460 320Q460 165 417 83Q397 41 362 16T301 -15T250 -22Q224 -22 198 -16T137 16T82 83Q39 165 39 320Q39 494 96 585ZM321 597Q291 629 250 629Q208 629 178 597Q153 571 145 525T137 333Q137 175 145 125T181 46Q209 16 250 16Q290 16 318 46Q347 76 354 130T362 333Q362 478 354 524T321 597Z" transform="translate(500,0)"></path><g transform="translate(1001,393)"><path stroke-width="1" transform="scale(0.707)" d="M164 157Q164 133 148 117T109 101H102Q148 22 224 22Q294 22 326 82Q345 115 345 210Q345 313 318 349Q292 382 260 382H254Q176 382 136 314Q132 307 129 306T114 304Q97 304 95 310Q93 314 93 485V614Q93 664 98 664Q100 666 102 666Q103 666 123 658T178 642T253 634Q324 634 389 662Q397 666 402 666Q410 666 410 648V635Q328 538 205 538Q174 538 149 544L139 546V374Q158 388 169 396T205 412T256 420Q337 420 393 355T449 201Q449 109 385 44T229 -22Q148 -22 99 32T50 154Q50 178 61 192T84 210T107 214Q132 214 148 197T164 157Z"></path></g></g></g></svg></span></p>

<p><strong>Subtasks</strong></p>

<p>For <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-6-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="4.261ex" height="2.343ex" style="vertical-align: -0.338ex;" viewBox="0 -863.1 1834.5 1008.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M42 313Q42 476 123 571T303 666Q372 666 402 630T432 550Q432 525 418 510T379 495Q356 495 341 509T326 548Q326 592 373 601Q351 623 311 626Q240 626 194 566Q147 500 147 364L148 360Q153 366 156 373Q197 433 263 433H267Q313 433 348 414Q372 400 396 374T435 317Q456 268 456 210V192Q456 169 451 149Q440 90 387 34T253 -22Q225 -22 199 -14T143 16T92 75T56 172T42 313ZM257 397Q227 397 205 380T171 335T154 278T148 216Q148 133 160 97T198 39Q222 21 251 21Q302 21 329 59Q342 77 347 104T352 209Q352 289 347 316T329 361Q302 397 257 397Z"></path><path stroke-width="1" d="M96 585Q152 666 249 666Q297 666 345 640T423 548Q460 465 460 320Q460 165 417 83Q397 41 362 16T301 -15T250 -22Q224 -22 198 -16T137 16T82 83Q39 165 39 320Q39 494 96 585ZM321 597Q291 629 250 629Q208 629 178 597Q153 571 145 525T137 333Q137 175 145 125T181 46Q209 16 250 16Q290 16 318 46Q347 76 354 130T362 333Q362 478 354 524T321 597Z" transform="translate(500,0)"></path><g transform="translate(1001,0)"><path stroke-width="1" d="M465 605Q428 605 394 614T340 632T319 641Q332 608 332 548Q332 458 293 403T202 347Q145 347 101 402T56 548Q56 637 101 693T202 750Q241 750 272 719Q359 642 464 642Q580 642 650 732Q662 748 668 749Q670 750 673 750Q682 750 688 743T693 726Q178 -47 170 -52Q166 -56 160 -56Q147 -56 142 -45Q137 -36 142 -27Q143 -24 363 304Q469 462 525 546T581 630Q528 605 465 605ZM207 385Q235 385 263 427T292 548Q292 617 267 664T200 712Q193 712 186 709T167 698T147 668T134 615Q132 595 132 548V527Q132 436 165 403Q183 385 203 385H207ZM500 146Q500 234 544 290T647 347Q699 347 737 292T776 146T737 0T646 -56Q590 -56 545 0T500 146ZM651 -18Q679 -18 707 24T736 146Q736 215 711 262T644 309Q637 309 630 306T611 295T591 265T578 212Q577 200 577 146V124Q577 -18 647 -18H651Z"></path></g></g></svg></span> score <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-7-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="12.133ex" height="2.843ex" style="vertical-align: -0.505ex;" viewBox="0 -1006.6 5224 1223.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M213 578L200 573Q186 568 160 563T102 556H83V602H102Q149 604 189 617T245 641T273 663Q275 666 285 666Q294 666 302 660V361L303 61Q310 54 315 52T339 48T401 46H427V0H416Q395 3 257 3Q121 3 100 0H88V46H114Q136 46 152 46T177 47T193 50T201 52T207 57T213 61V578Z"></path><g transform="translate(778,0)"><path stroke-width="1" d="M674 636Q682 636 688 630T694 615T687 601Q686 600 417 472L151 346L399 228Q687 92 691 87Q694 81 694 76Q694 58 676 56H670L382 192Q92 329 90 331Q83 336 83 348Q84 359 96 365Q104 369 382 500T665 634Q669 636 674 636ZM84 -118Q84 -108 99 -98H678Q694 -104 694 -118Q694 -130 679 -138H98Q84 -131 84 -118Z"></path></g><g transform="translate(1834,0)"><path stroke-width="1" d="M21 287Q22 293 24 303T36 341T56 388T89 425T135 442Q171 442 195 424T225 390T231 369Q231 367 232 367L243 378Q304 442 382 442Q436 442 469 415T503 336T465 179T427 52Q427 26 444 26Q450 26 453 27Q482 32 505 65T540 145Q542 153 560 153Q580 153 580 145Q580 144 576 130Q568 101 554 73T508 17T439 -10Q392 -10 371 17T350 73Q350 92 386 193T423 345Q423 404 379 404H374Q288 404 229 303L222 291L189 157Q156 26 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 112 180T152 343Q153 348 153 366Q153 405 129 405Q91 405 66 305Q60 285 60 284Q58 278 41 278H27Q21 284 21 287Z"></path></g><g transform="translate(2712,0)"><path stroke-width="1" d="M674 636Q682 636 688 630T694 615T687 601Q686 600 417 472L151 346L399 228Q687 92 691 87Q694 81 694 76Q694 58 676 56H670L382 192Q92 329 90 331Q83 336 83 348Q84 359 96 365Q104 369 382 500T665 634Q669 636 674 636ZM84 -118Q84 -108 99 -98H678Q694 -104 694 -118Q694 -130 679 -138H98Q84 -131 84 -118Z"></path></g><g transform="translate(3769,0)"><path stroke-width="1" d="M213 578L200 573Q186 568 160 563T102 556H83V602H102Q149 604 189 617T245 641T273 663Q275 666 285 666Q294 666 302 660V361L303 61Q310 54 315 52T339 48T401 46H427V0H416Q395 3 257 3Q121 3 100 0H88V46H114Q136 46 152 46T177 47T193 50T201 52T207 57T213 61V578Z"></path><path stroke-width="1" d="M96 585Q152 666 249 666Q297 666 345 640T423 548Q460 465 460 320Q460 165 417 83Q397 41 362 16T301 -15T250 -22Q224 -22 198 -16T137 16T82 83Q39 165 39 320Q39 494 96 585ZM321 597Q291 629 250 629Q208 629 178 597Q153 571 145 525T137 333Q137 175 145 125T181 46Q209 16 250 16Q290 16 318 46Q347 76 354 130T362 333Q362 478 354 524T321 597Z" transform="translate(500,0)"></path><g transform="translate(1001,393)"><path stroke-width="1" transform="scale(0.707)" d="M127 463Q100 463 85 480T69 524Q69 579 117 622T233 665Q268 665 277 664Q351 652 390 611T430 522Q430 470 396 421T302 350L299 348Q299 347 308 345T337 336T375 315Q457 262 457 175Q457 96 395 37T238 -22Q158 -22 100 21T42 130Q42 158 60 175T105 193Q133 193 151 175T169 130Q169 119 166 110T159 94T148 82T136 74T126 70T118 67L114 66Q165 21 238 21Q293 21 321 74Q338 107 338 175V195Q338 290 274 322Q259 328 213 329L171 330L168 332Q166 335 166 348Q166 366 174 366Q202 366 232 371Q266 376 294 413T322 525V533Q322 590 287 612Q265 626 240 626Q208 626 181 615T143 592T132 580H135Q138 579 143 578T153 573T165 566T175 555T183 540T186 520Q186 498 172 481T127 463Z"></path></g></g></g></svg></span><br>
For <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-8-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="5.423ex" height="2.343ex" style="vertical-align: -0.338ex;" viewBox="0 -863.1 2335 1008.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M213 578L200 573Q186 568 160 563T102 556H83V602H102Q149 604 189 617T245 641T273 663Q275 666 285 666Q294 666 302 660V361L303 61Q310 54 315 52T339 48T401 46H427V0H416Q395 3 257 3Q121 3 100 0H88V46H114Q136 46 152 46T177 47T193 50T201 52T207 57T213 61V578Z"></path><path stroke-width="1" d="M96 585Q152 666 249 666Q297 666 345 640T423 548Q460 465 460 320Q460 165 417 83Q397 41 362 16T301 -15T250 -22Q224 -22 198 -16T137 16T82 83Q39 165 39 320Q39 494 96 585ZM321 597Q291 629 250 629Q208 629 178 597Q153 571 145 525T137 333Q137 175 145 125T181 46Q209 16 250 16Q290 16 318 46Q347 76 354 130T362 333Q362 478 354 524T321 597Z" transform="translate(500,0)"></path><path stroke-width="1" d="M96 585Q152 666 249 666Q297 666 345 640T423 548Q460 465 460 320Q460 165 417 83Q397 41 362 16T301 -15T250 -22Q224 -22 198 -16T137 16T82 83Q39 165 39 320Q39 494 96 585ZM321 597Q291 629 250 629Q208 629 178 597Q153 571 145 525T137 333Q137 175 145 125T181 46Q209 16 250 16Q290 16 318 46Q347 76 354 130T362 333Q362 478 354 524T321 597Z" transform="translate(1001,0)"></path><g transform="translate(1501,0)"><path stroke-width="1" d="M465 605Q428 605 394 614T340 632T319 641Q332 608 332 548Q332 458 293 403T202 347Q145 347 101 402T56 548Q56 637 101 693T202 750Q241 750 272 719Q359 642 464 642Q580 642 650 732Q662 748 668 749Q670 750 673 750Q682 750 688 743T693 726Q178 -47 170 -52Q166 -56 160 -56Q147 -56 142 -45Q137 -36 142 -27Q143 -24 363 304Q469 462 525 546T581 630Q528 605 465 605ZM207 385Q235 385 263 427T292 548Q292 617 267 664T200 712Q193 712 186 709T167 698T147 668T134 615Q132 595 132 548V527Q132 436 165 403Q183 385 203 385H207ZM500 146Q500 234 544 290T647 347Q699 347 737 292T776 146T737 0T646 -56Q590 -56 545 0T500 146ZM651 -18Q679 -18 707 24T736 146Q736 215 711 262T644 309Q637 309 630 306T611 295T591 265T578 212Q577 200 577 146V124Q577 -18 647 -18H651Z"></path></g></g></svg></span> score <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-9-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="12.133ex" height="2.843ex" style="vertical-align: -0.505ex;" viewBox="0 -1006.6 5224 1223.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M213 578L200 573Q186 568 160 563T102 556H83V602H102Q149 604 189 617T245 641T273 663Q275 666 285 666Q294 666 302 660V361L303 61Q310 54 315 52T339 48T401 46H427V0H416Q395 3 257 3Q121 3 100 0H88V46H114Q136 46 152 46T177 47T193 50T201 52T207 57T213 61V578Z"></path><g transform="translate(778,0)"><path stroke-width="1" d="M674 636Q682 636 688 630T694 615T687 601Q686 600 417 472L151 346L399 228Q687 92 691 87Q694 81 694 76Q694 58 676 56H670L382 192Q92 329 90 331Q83 336 83 348Q84 359 96 365Q104 369 382 500T665 634Q669 636 674 636ZM84 -118Q84 -108 99 -98H678Q694 -104 694 -118Q694 -130 679 -138H98Q84 -131 84 -118Z"></path></g><g transform="translate(1834,0)"><path stroke-width="1" d="M21 287Q22 293 24 303T36 341T56 388T89 425T135 442Q171 442 195 424T225 390T231 369Q231 367 232 367L243 378Q304 442 382 442Q436 442 469 415T503 336T465 179T427 52Q427 26 444 26Q450 26 453 27Q482 32 505 65T540 145Q542 153 560 153Q580 153 580 145Q580 144 576 130Q568 101 554 73T508 17T439 -10Q392 -10 371 17T350 73Q350 92 386 193T423 345Q423 404 379 404H374Q288 404 229 303L222 291L189 157Q156 26 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 112 180T152 343Q153 348 153 366Q153 405 129 405Q91 405 66 305Q60 285 60 284Q58 278 41 278H27Q21 284 21 287Z"></path></g><g transform="translate(2712,0)"><path stroke-width="1" d="M674 636Q682 636 688 630T694 615T687 601Q686 600 417 472L151 346L399 228Q687 92 691 87Q694 81 694 76Q694 58 676 56H670L382 192Q92 329 90 331Q83 336 83 348Q84 359 96 365Q104 369 382 500T665 634Q669 636 674 636ZM84 -118Q84 -108 99 -98H678Q694 -104 694 -118Q694 -130 679 -138H98Q84 -131 84 -118Z"></path></g><g transform="translate(3769,0)"><path stroke-width="1" d="M213 578L200 573Q186 568 160 563T102 556H83V602H102Q149 604 189 617T245 641T273 663Q275 666 285 666Q294 666 302 660V361L303 61Q310 54 315 52T339 48T401 46H427V0H416Q395 3 257 3Q121 3 100 0H88V46H114Q136 46 152 46T177 47T193 50T201 52T207 57T213 61V578Z"></path><path stroke-width="1" d="M96 585Q152 666 249 666Q297 666 345 640T423 548Q460 465 460 320Q460 165 417 83Q397 41 362 16T301 -15T250 -22Q224 -22 198 -16T137 16T82 83Q39 165 39 320Q39 494 96 585ZM321 597Q291 629 250 629Q208 629 178 597Q153 571 145 525T137 333Q137 175 145 125T181 46Q209 16 250 16Q290 16 318 46Q347 76 354 130T362 333Q362 478 354 524T321 597Z" transform="translate(500,0)"></path><g transform="translate(1001,393)"><path stroke-width="1" transform="scale(0.707)" d="M164 157Q164 133 148 117T109 101H102Q148 22 224 22Q294 22 326 82Q345 115 345 210Q345 313 318 349Q292 382 260 382H254Q176 382 136 314Q132 307 129 306T114 304Q97 304 95 310Q93 314 93 485V614Q93 664 98 664Q100 666 102 666Q103 666 123 658T178 642T253 634Q324 634 389 662Q397 666 402 666Q410 666 410 648V635Q328 538 205 538Q174 538 149 544L139 546V374Q158 388 169 396T205 412T256 420Q337 420 393 355T449 201Q449 109 385 44T229 -22Q148 -22 99 32T50 154Q50 178 61 192T84 210T107 214Q132 214 148 197T164 157Z"></path></g></g></g></svg></span></p></div></div></div><div class="challenge_output_format"><div class="msB challenge_output_format_title"><p><strong>Output Format</strong></p></div><div class="msB challenge_output_format_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><p>Print an integer denoting the minimum number of bribes needed to get the queue into its final state; print <strong>Too chaotic</strong> if the state is invalid (requires <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-1-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="10.051ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 4327.5 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M287 628Q287 635 230 637Q206 637 199 638T192 648Q192 649 194 659Q200 679 203 681T397 683Q587 682 600 680Q664 669 707 631T751 530Q751 453 685 389Q616 321 507 303Q500 302 402 301H307L277 182Q247 66 247 59Q247 55 248 54T255 50T272 48T305 46H336Q342 37 342 35Q342 19 335 5Q330 0 319 0Q316 0 282 1T182 2Q120 2 87 2T51 1Q33 1 33 11Q33 13 36 25Q40 41 44 43T67 46Q94 46 127 49Q141 52 146 61Q149 65 218 339T287 628ZM645 554Q645 567 643 575T634 597T609 619T560 635Q553 636 480 637Q463 637 445 637T416 636T404 636Q391 635 386 627Q384 621 367 550T332 412T314 344Q314 342 395 342H407H430Q542 342 590 392Q617 419 631 471T645 554Z"></path><g transform="translate(751,0)"><path stroke-width="1" d="M39 168Q39 225 58 272T107 350T174 402T244 433T307 442H310Q355 442 388 420T421 355Q421 265 310 237Q261 224 176 223Q139 223 138 221Q138 219 132 186T125 128Q125 81 146 54T209 26T302 45T394 111Q403 121 406 121Q410 121 419 112T429 98T420 82T390 55T344 24T281 -1T205 -11Q126 -11 83 42T39 168ZM373 353Q367 405 305 405Q272 405 244 391T199 357T170 316T154 280T149 261Q149 260 169 260Q282 260 327 284T373 353Z"></path></g><g transform="translate(1218,0)"><path stroke-width="1" d="M21 287Q22 290 23 295T28 317T38 348T53 381T73 411T99 433T132 442Q161 442 183 430T214 408T225 388Q227 382 228 382T236 389Q284 441 347 441H350Q398 441 422 400Q430 381 430 363Q430 333 417 315T391 292T366 288Q346 288 334 299T322 328Q322 376 378 392Q356 405 342 405Q286 405 239 331Q229 315 224 298T190 165Q156 25 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 114 189T154 366Q154 405 128 405Q107 405 92 377T68 316T57 280Q55 278 41 278H27Q21 284 21 287Z"></path></g><g transform="translate(1669,0)"><path stroke-width="1" d="M131 289Q131 321 147 354T203 415T300 442Q362 442 390 415T419 355Q419 323 402 308T364 292Q351 292 340 300T328 326Q328 342 337 354T354 372T367 378Q368 378 368 379Q368 382 361 388T336 399T297 405Q249 405 227 379T204 326Q204 301 223 291T278 274T330 259Q396 230 396 163Q396 135 385 107T352 51T289 7T195 -10Q118 -10 86 19T53 87Q53 126 74 143T118 160Q133 160 146 151T160 120Q160 94 142 76T111 58Q109 57 108 57T107 55Q108 52 115 47T146 34T201 27Q237 27 263 38T301 66T318 97T323 122Q323 150 302 164T254 181T195 196T148 231Q131 256 131 289Z"></path></g><g transform="translate(2139,0)"><path stroke-width="1" d="M201 -11Q126 -11 80 38T34 156Q34 221 64 279T146 380Q222 441 301 441Q333 441 341 440Q354 437 367 433T402 417T438 387T464 338T476 268Q476 161 390 75T201 -11ZM121 120Q121 70 147 48T206 26Q250 26 289 58T351 142Q360 163 374 216T388 308Q388 352 370 375Q346 405 306 405Q243 405 195 347Q158 303 140 230T121 120Z"></path></g><g transform="translate(2624,0)"><path stroke-width="1" d="M21 287Q22 293 24 303T36 341T56 388T89 425T135 442Q171 442 195 424T225 390T231 369Q231 367 232 367L243 378Q304 442 382 442Q436 442 469 415T503 336T465 179T427 52Q427 26 444 26Q450 26 453 27Q482 32 505 65T540 145Q542 153 560 153Q580 153 580 145Q580 144 576 130Q568 101 554 73T508 17T439 -10Q392 -10 371 17T350 73Q350 92 386 193T423 345Q423 404 379 404H374Q288 404 229 303L222 291L189 157Q156 26 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 112 180T152 343Q153 348 153 366Q153 405 129 405Q91 405 66 305Q60 285 60 284Q58 278 41 278H27Q21 284 21 287Z"></path></g><g transform="translate(3475,0)"><path stroke-width="1" d="M42 0H40Q26 0 26 11Q26 15 29 27Q33 41 36 43T55 46Q141 49 190 98Q200 108 306 224T411 342Q302 620 297 625Q288 636 234 637H206Q200 643 200 645T202 664Q206 677 212 683H226Q260 681 347 681Q380 681 408 681T453 682T473 682Q490 682 490 671Q490 670 488 658Q484 643 481 640T465 637Q434 634 411 620L488 426L541 485Q646 598 646 610Q646 628 622 635Q617 635 609 637Q594 637 594 648Q594 650 596 664Q600 677 606 683H618Q619 683 643 683T697 681T738 680Q828 680 837 683H845Q852 676 852 672Q850 647 840 637H824Q790 636 763 628T722 611T698 593L687 584Q687 585 592 480L505 384Q505 383 536 304T601 142T638 56Q648 47 699 46Q734 46 734 37Q734 35 732 23Q728 7 725 4T711 1Q708 1 678 1T589 2Q528 2 496 2T461 1Q444 1 444 10Q444 11 446 25Q448 35 450 39T455 44T464 46T480 47T506 54Q523 62 523 64Q522 64 476 181L429 299Q241 95 236 84Q232 76 232 72Q232 53 261 47Q262 47 267 47T273 46Q276 46 277 46T280 45T283 42T284 35Q284 26 282 19Q279 6 276 4T261 1Q258 1 243 1T201 2T142 2Q64 2 42 0Z"></path></g></g></svg></span> to bribe more than <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-2-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.162ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 500.5 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M109 429Q82 429 66 447T50 491Q50 562 103 614T235 666Q326 666 387 610T449 465Q449 422 429 383T381 315T301 241Q265 210 201 149L142 93L218 92Q375 92 385 97Q392 99 409 186V189H449V186Q448 183 436 95T421 3V0H50V19V31Q50 38 56 46T86 81Q115 113 136 137Q145 147 170 174T204 211T233 244T261 278T284 308T305 340T320 369T333 401T340 431T343 464Q343 527 309 573T212 619Q179 619 154 602T119 569T109 550Q109 549 114 549Q132 549 151 535T170 489Q170 464 154 447T109 429Z"></path></g></svg></span> people).</p></div></div></div><div class="challenge_sample_input"><div class="msB challenge_sample_input_title"><p><strong>Sample Input</strong></p></div><div class="msB challenge_sample_input_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><pre><code>2
5
2 1 5 3 4
5
2 5 1 3 4
</code></pre></div></div></div><div class="challenge_sample_output"><div class="msB challenge_sample_output_title"><p><strong>Sample Output</strong></p></div><div class="msB challenge_sample_output_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><pre><code>3
Too chaotic
</code></pre></div></div></div><div class="challenge_explanation"><div class="msB challenge_explanation_title"><p><strong>Explanation</strong></p></div><div class="msB challenge_explanation_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><p><strong>Sample 1</strong></p>

<p>The initial state:</p>

<p><img src="./New Year Chaos _files/1451665589-31d436ba19-pic11.png" title="pic1(1).png"></p>

<p>After person <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-1-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.162ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 500.5 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M164 157Q164 133 148 117T109 101H102Q148 22 224 22Q294 22 326 82Q345 115 345 210Q345 313 318 349Q292 382 260 382H254Q176 382 136 314Q132 307 129 306T114 304Q97 304 95 310Q93 314 93 485V614Q93 664 98 664Q100 666 102 666Q103 666 123 658T178 642T253 634Q324 634 389 662Q397 666 402 666Q410 666 410 648V635Q328 538 205 538Q174 538 149 544L139 546V374Q158 388 169 396T205 412T256 420Q337 420 393 355T449 201Q449 109 385 44T229 -22Q148 -22 99 32T50 154Q50 178 61 192T84 210T107 214Q132 214 148 197T164 157Z"></path></g></svg></span> moves one position ahead by bribing person <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-2-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.162ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 500.5 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M462 0Q444 3 333 3Q217 3 199 0H190V46H221Q241 46 248 46T265 48T279 53T286 61Q287 63 287 115V165H28V211L179 442Q332 674 334 675Q336 677 355 677H373L379 671V211H471V165H379V114Q379 73 379 66T385 54Q393 47 442 46H471V0H462ZM293 211V545L74 212L183 211H293Z"></path></g></svg></span>:</p>

<p><img src="./New Year Chaos _files/1451665679-6504422ed9-pic2.png" title="pic2.png"></p>

<p>Now person <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-3-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.162ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 500.5 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M164 157Q164 133 148 117T109 101H102Q148 22 224 22Q294 22 326 82Q345 115 345 210Q345 313 318 349Q292 382 260 382H254Q176 382 136 314Q132 307 129 306T114 304Q97 304 95 310Q93 314 93 485V614Q93 664 98 664Q100 666 102 666Q103 666 123 658T178 642T253 634Q324 634 389 662Q397 666 402 666Q410 666 410 648V635Q328 538 205 538Q174 538 149 544L139 546V374Q158 388 169 396T205 412T256 420Q337 420 393 355T449 201Q449 109 385 44T229 -22Q148 -22 99 32T50 154Q50 178 61 192T84 210T107 214Q132 214 148 197T164 157Z"></path></g></svg></span> moves another position ahead by bribing person <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-4-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.162ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 500.5 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M127 463Q100 463 85 480T69 524Q69 579 117 622T233 665Q268 665 277 664Q351 652 390 611T430 522Q430 470 396 421T302 350L299 348Q299 347 308 345T337 336T375 315Q457 262 457 175Q457 96 395 37T238 -22Q158 -22 100 21T42 130Q42 158 60 175T105 193Q133 193 151 175T169 130Q169 119 166 110T159 94T148 82T136 74T126 70T118 67L114 66Q165 21 238 21Q293 21 321 74Q338 107 338 175V195Q338 290 274 322Q259 328 213 329L171 330L168 332Q166 335 166 348Q166 366 174 366Q202 366 232 371Q266 376 294 413T322 525V533Q322 590 287 612Q265 626 240 626Q208 626 181 615T143 592T132 580H135Q138 579 143 578T153 573T165 566T175 555T183 540T186 520Q186 498 172 481T127 463Z"></path></g></svg></span>:</p>

<p><img src="./New Year Chaos _files/1451665818-27bd62bb0d-pic3.png" title="pic3.png"></p>

<p>And person <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-5-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.162ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 500.5 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M109 429Q82 429 66 447T50 491Q50 562 103 614T235 666Q326 666 387 610T449 465Q449 422 429 383T381 315T301 241Q265 210 201 149L142 93L218 92Q375 92 385 97Q392 99 409 186V189H449V186Q448 183 436 95T421 3V0H50V19V31Q50 38 56 46T86 81Q115 113 136 137Q145 147 170 174T204 211T233 244T261 278T284 308T305 340T320 369T333 401T340 431T343 464Q343 527 309 573T212 619Q179 619 154 602T119 569T109 550Q109 549 114 549Q132 549 151 535T170 489Q170 464 154 447T109 429Z"></path></g></svg></span> moves one position ahead by bribing person <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-6-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.162ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 500.5 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M213 578L200 573Q186 568 160 563T102 556H83V602H102Q149 604 189 617T245 641T273 663Q275 666 285 666Q294 666 302 660V361L303 61Q310 54 315 52T339 48T401 46H427V0H416Q395 3 257 3Q121 3 100 0H88V46H114Q136 46 152 46T177 47T193 50T201 52T207 57T213 61V578Z"></path></g></svg></span>:</p>

<p><img src="./New Year Chaos _files/1451666025-02a2395a00-pic5.png" title="pic5.png"></p>

<p>So the final state is <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-7-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="9.948ex" height="2.509ex" style="vertical-align: -0.671ex;" viewBox="0 -791.3 4283.2 1080.4" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M109 429Q82 429 66 447T50 491Q50 562 103 614T235 666Q326 666 387 610T449 465Q449 422 429 383T381 315T301 241Q265 210 201 149L142 93L218 92Q375 92 385 97Q392 99 409 186V189H449V186Q448 183 436 95T421 3V0H50V19V31Q50 38 56 46T86 81Q115 113 136 137Q145 147 170 174T204 211T233 244T261 278T284 308T305 340T320 369T333 401T340 431T343 464Q343 527 309 573T212 619Q179 619 154 602T119 569T109 550Q109 549 114 549Q132 549 151 535T170 489Q170 464 154 447T109 429Z"></path><g transform="translate(500,0)"><path stroke-width="1" d="M78 35T78 60T94 103T137 121Q165 121 187 96T210 8Q210 -27 201 -60T180 -117T154 -158T130 -185T117 -194Q113 -194 104 -185T95 -172Q95 -168 106 -156T131 -126T157 -76T173 -3V9L172 8Q170 7 167 6T161 3T152 1T140 0Q113 0 96 17Z"></path></g><g transform="translate(945,0)"><path stroke-width="1" d="M213 578L200 573Q186 568 160 563T102 556H83V602H102Q149 604 189 617T245 641T273 663Q275 666 285 666Q294 666 302 660V361L303 61Q310 54 315 52T339 48T401 46H427V0H416Q395 3 257 3Q121 3 100 0H88V46H114Q136 46 152 46T177 47T193 50T201 52T207 57T213 61V578Z"></path></g><g transform="translate(1446,0)"><path stroke-width="1" d="M78 35T78 60T94 103T137 121Q165 121 187 96T210 8Q210 -27 201 -60T180 -117T154 -158T130 -185T117 -194Q113 -194 104 -185T95 -172Q95 -168 106 -156T131 -126T157 -76T173 -3V9L172 8Q170 7 167 6T161 3T152 1T140 0Q113 0 96 17Z"></path></g><g transform="translate(1891,0)"><path stroke-width="1" d="M164 157Q164 133 148 117T109 101H102Q148 22 224 22Q294 22 326 82Q345 115 345 210Q345 313 318 349Q292 382 260 382H254Q176 382 136 314Q132 307 129 306T114 304Q97 304 95 310Q93 314 93 485V614Q93 664 98 664Q100 666 102 666Q103 666 123 658T178 642T253 634Q324 634 389 662Q397 666 402 666Q410 666 410 648V635Q328 538 205 538Q174 538 149 544L139 546V374Q158 388 169 396T205 412T256 420Q337 420 393 355T449 201Q449 109 385 44T229 -22Q148 -22 99 32T50 154Q50 178 61 192T84 210T107 214Q132 214 148 197T164 157Z"></path></g><g transform="translate(2391,0)"><path stroke-width="1" d="M78 35T78 60T94 103T137 121Q165 121 187 96T210 8Q210 -27 201 -60T180 -117T154 -158T130 -185T117 -194Q113 -194 104 -185T95 -172Q95 -168 106 -156T131 -126T157 -76T173 -3V9L172 8Q170 7 167 6T161 3T152 1T140 0Q113 0 96 17Z"></path></g><g transform="translate(2836,0)"><path stroke-width="1" d="M127 463Q100 463 85 480T69 524Q69 579 117 622T233 665Q268 665 277 664Q351 652 390 611T430 522Q430 470 396 421T302 350L299 348Q299 347 308 345T337 336T375 315Q457 262 457 175Q457 96 395 37T238 -22Q158 -22 100 21T42 130Q42 158 60 175T105 193Q133 193 151 175T169 130Q169 119 166 110T159 94T148 82T136 74T126 70T118 67L114 66Q165 21 238 21Q293 21 321 74Q338 107 338 175V195Q338 290 274 322Q259 328 213 329L171 330L168 332Q166 335 166 348Q166 366 174 366Q202 366 232 371Q266 376 294 413T322 525V533Q322 590 287 612Q265 626 240 626Q208 626 181 615T143 592T132 580H135Q138 579 143 578T153 573T165 566T175 555T183 540T186 520Q186 498 172 481T127 463Z"></path></g><g transform="translate(3337,0)"><path stroke-width="1" d="M78 35T78 60T94 103T137 121Q165 121 187 96T210 8Q210 -27 201 -60T180 -117T154 -158T130 -185T117 -194Q113 -194 104 -185T95 -172Q95 -168 106 -156T131 -126T157 -76T173 -3V9L172 8Q170 7 167 6T161 3T152 1T140 0Q113 0 96 17Z"></path></g><g transform="translate(3782,0)"><path stroke-width="1" d="M462 0Q444 3 333 3Q217 3 199 0H190V46H221Q241 46 248 46T265 48T279 53T286 61Q287 63 287 115V165H28V211L179 442Q332 674 334 675Q336 677 355 677H373L379 671V211H471V165H379V114Q379 73 379 66T385 54Q393 47 442 46H471V0H462ZM293 211V545L74 212L183 211H293Z"></path></g></g></svg></span> after three bribing operations.</p>

<p><strong>Sample 2</strong></p>

<p>No person can afford to bribe more than two people, so its not possible to achieve the input state.</p></div></div></div>
            </div>
        </div>
        <aside class="span-md-4 pull-right fullscreen-hide challenge-sidebar">
            <div class="challenge-sidebar-container"><div class="social-share-wrap-2">

<div class="social-share-view-2 social-buttons plR mlB pull-left full-width">

  


  <a class="social-btn cursor linkedin-share-btn msL pull-right  txt-white">
    <i class="icon-linkedin"></i>
  </a>

  <a class="social-btn cursor twitter-share-btn msL pull-right txt-white  txt-white">
    <i class="icon-twitter"></i>
  </a>

  <a class="social-btn cursor facebook-share-btn msL pull-right  txt-white">
    <i class="icon-facebook"></i>
  </a>
</div>
</div>






    



    <div class="sidebar_problem_difficulty">
    <p class="sidebar_bold">Submissions:</p>
    
    <a class="sidebar_subcount" href="https://www.hackerrank.com/challenges/new-year-chaos/leaderboard" data-analytics="ChallengeViewHackerCount" data-attr1="new-year-chaos">2387</a>
    

    <div>
        <p class="sidebar_bold">Max Score:</p>
            <p class="sidebar_att">
            
            40
            
            </p>
    </div>
    <div>
        
          <p class="sidebar_bold">Difficulty: </p>
          <p class="sidebar_att">
              
                  Moderate
              
          </p>
        
    </div>
</div>





<div id="sidebar-more-options" class="hide">
  <div class="mlB mlT">
      <a class="challenge-sidebar-anchor pointer" href="https://www.hackerrank.com/rest/contests/master/challenges/new-year-chaos/download_pdf?language=English" target="_blank" id="pdf-link" data-analytics="ChallengeViewSidebarPDF" data-attr1="new-year-chaos" style="color:#979faf;"><i class="icon-download"></i>Download problem statement</a>
  </div>
  <div class="mlB">
    <a class="challenge-sidebar-anchor pointer" href="https://www.hackerrank.com/rest/contests/master/challenges/new-year-chaos/download_testcases" target="_blank" id="test-cases-link" data-analytics="ChallengeViewSidebarTestCases" data-attr1="new-year-chaos" style="color:#979faf;"><i class="icon-download"></i>
      
        Download sample test cases
      
    </a>
  </div>
  <div class="sidebar_challenge_suggestion fullscreen-hide">
      <a href="https://www.hackerrank.com/#" class="challenge-sidebar-anchor js-suggest-edits challenge_suggestion-toggle fullscreen-hide" data-analytics="ChallengeViewSuggestEdit" data-attr1="new-year-chaos" style="color:#979faf;"><i class="icon-edit"></i>Suggest Edits</a>

      <div class="challenge_suggestion fullscreen-hide row">
          <div class="span11">
              <div class="formgroup text-center">
                  <div class="alert error hide"></div>
                  <div class="alert success hide">Suggestion Sent!</div>
              </div>
              <form id="suggestion-form" class="hide challenge_suggestion-form fullscreen-hide" __bizdiag="-1696069907" __biza="WJ__">
                  <p class="challenge_suggestion-header pdB">Thanks for helping us refine this problem statement. Please address your suggestions below. </p>
                  <textarea id="suggestion" rows="10" width="100" class="challenge_suggestion-input"></textarea>
                  <div class="challenge_suggestion-buttons access-buttons clearfix">
                      <div class="pull-right mlB">
                          <button class="btn btn-green js-suggestion-save pull-right" data-analytics="Submit Suggestion">Submit Suggestion</button>
                          <button class="btn btn-text js-suggestion-cancel pull-right" data-analytics="Cancel Suggestion">Cancel</button>
                      </div>
                  </div>
              </form>
          </div>
      </div>
  </div>
  <div class="language-selector pmT">
    
    <div class="psT hide small color-alt-grey" id="preference-msg">
    <a class="language-preference btn btn-small msB" href="https://www.hackerrank.com/#">Set as default</a><br>
    <p class="mjB">You can always change back later.</p>
    </div>
  </div>
</div>
<div class="mlB mlT"><a id="sidebar-more-button" class="challenge-sidebar-anchor pointer">More</a></div>


</div></aside>
    </div>
</div>
</div><div class="challenge-request"><div class="challenge-input codeeditor-wrapper container fs-container mlB"><div id="codeshell-wrapper"><div class="clearfix grey-header fixed-hand0 cap plL plR psT psB" style="position: relative;">
  <div class="msT pull-left"><em id="status-text"></em></div>
  
  <div class="fork-dialog cs-dialog hide">
    <div class="header">Fork <span class="version-seq"></span>
        <i data-analytics="CodeShellForkCode" data-attr1="Cancel" class="icon--single icon-cancel-small close-fork-dialog cursor-pointer pull-right psR"></i>
    </div>
    <div class="body">
      <p class="grey-msg">past buffers are marked read only, you wont be able to edit your current buffer without forking it</p>
      <div class="m msT">
        <button data-analytics="CodeShellForkCode" data-attr1="ForkCurrentBuffer" class="btn btn-primary fork-version" data-action="fork">Fork <span class="version-seq"></span></button>&nbsp;&nbsp;
        <button data-analytics="CodeShellForkCode" data-attr1="CreateNewBuffer" class="btn btn-primary fork-version" data-action="orphan">Create New Buffer</button>
      </div>
    </div>
  </div>
  <div class="fork-limit-reached-dialog cs-dialog hide">
    <div class="header">Fork Limit Reached</div>
    <div class="body">
      <p class="grey-msg">You can’t create more than 20 buffers, please delete one of your old bufferes to create a new buffer.</p>
      <div class="m msT">
        <button class="btn close-fork-limit-reached-dialog">OK</button>&nbsp;&nbsp;
      </div>
    </div>
  </div>
  <div class="delete-version-dialog cs-dialog hide">
    <div class="header">Delete <span class="version-seq"></span></div>
    <div class="body">
      <p class="grey-msg">Are you sure you want to delete <strong><span class="version-seq"></span></strong>? This action can’t be undone.</p>
      <div class="m msT">
        <button class="btn delete-version-button">Yes</button>&nbsp;&nbsp;
      </div>
    </div>
  </div>
  <div class="pull-left no-select">
    <p style="padding-top: 8px;">
      <strong class="version-name">Current Buffer</strong>
      <span class="gray-text version-meta">(saved locally, editable)</span>
      &nbsp;&nbsp;
      <a data-analytics="CodeShellShowForkOptions" class="fork-this-version"><i class="icon--grey cursor icon-flow-branch"></i></a>
      <a data-analytics="CodeShellShowVersionTimeline" class="show-version-timeline"><i class="icon--grey cursor icon-back-in-time"></i></a>
      <a class="delete-active-version hide"><i class="icon--grey cursor icon-trash"></i></a>
    </p>
  </div>
  
  
  <div class="pull-right">
    
    <div class="inline large lines inverse pull-right msT msL">
      
      
      <a class="restorefullscreen force-hide active-link no-select">
          <i class="icon-resize-small-alt icon--grey no-select"></i></a>
      <a class="fullscreen active-link no-select" data-analytics="Switch to fullscreen"><i class="icon-resize-full-alt icon--grey no-select"></i></a>
      
      <a class="hide" style="display:none;"></a>
      <div style="position:relative; margin-left: 0px;">
        <a class="cursor no-select" data-analytics="CodeShellShowPreferences" id="show-preferences"><i class="icon-cog icon--grey no-select"></i></a>
        <div id="pref-pane" style="position: absolute;right: -0.5em;top: 2em;z-index: 9;background: #fff;border: 1px solid #ddd;border-radius: 5px;padding: 10px;  width: 20em; display: none;">
          <div style="position: absolute;width: 0;right: 0.8em;height: 0;border-left: 7px solid transparent;border-right: 7px solid transparent;border-bottom: 7px solid #ddd;top: -0.4em;"></div>
          
            <div class="formgroup horizontal">
              <label class="span5">Editor Mode</label>
              <div class="inline">
                <div class="btn-group no-select">
                  <a data-analytics="CodeShellEditorMode" data-attr1="Emacs" class="cursor emacs btn btn-small btn-white editor-mode-button no-select" data-editor="emacs">Emacs</a>
                  <a data-analytics="CodeShellEditorMode" data-attr1="Normal" class="cursor default btn btn-small btn-white editor-mode-button no-select btn-primary" data-editor="default">Normal</a>
                  <a data-analytics="CodeShellEditorMode" data-attr1="Vim" class="cursor vim btn btn-small btn-white editor-mode-button no-select" data-editor="vim">Vim</a>
                </div>
              </div>
            </div>
          
          
            <div class="formgroup horizontal">
              <label class="span5">Editor Theme</label>
              <div class="inline">
                <div class="btn-group no-select">
                  <a data-analytics="CodeShellEditorTheme" data-attr1="Light" class="cursor light btn btn-small btn-white editor-theme-button no-select btn-primary" data-editor="light">Light</a>
                  <a data-analytics="CodeShellEditorTheme" data-attr1="Dark" class="cursor dark btn btn-small btn-white editor-theme-button no-select" data-editor="dark">Dark</a>
                </div>
              </div>
            </div>
          
          <div class="formgroup horizontal">
            <label class="span5">Tab Spaces</label>
            <div class="inline">
              <div class="btn-group no-select">
                <a data-analytics="CodeShellEditorSpace" data-attr1="2" class="cursor 2space btn btn-small btn-white editor-tabspace-button no-select" data-editor="2">2 spaces</a>
                <a data-analytics="CodeShellEditorSpace" data-attr1="4" class="cursor 4space  btn btn-small btn-white editor-tabspace-button no-select btn-primary" data-editor="4">4 spaces</a>
                <a data-analytics="CodeShellEditorSpace" data-attr1="8" class="cursor 8space btn btn-small btn-white editor-tabspace-button no-select" data-editor="8">8 spaces</a>
              </div>
            </div>
          </div>
          
            <div class="formgroup horizontal">
              <label class="span5">Intellisense</label>
              <div class="inline">
                <div class="btn-group no-select">
                  <a data-analytics="CodeShellAutoComplete" data-attr1="Enable" class="cursor emacs btn btn-small btn-white editor-autocomplete-button no-select btn-primary" data-editor="true">Enable</a>
                  <a data-analytics="CodeShellAutoComplete" data-attr1="Disable" class="cursor default btn btn-small btn-white editor-autocomplete-button no-select" data-editor="false">Disable</a>
                </div>
              </div>
            </div>
          
          
        </div>
      </div>
    </div>
    <div class="pull-right">
      <div class="dummy-lang-container hide"></div>
      <div class="select2-container" id="s2id_select-lang"><a href="javascript:void(0)" onclick="return false;" class="select2-choice" tabindex="-1">   <span>C++</span><abbr class="select2-search-choice-close"></abbr>   <div><b></b></div></a><input class="select2-focusser select2-offscreen" type="text" id="s2id_autogen1" data-original-title="" title=""><div class="select2-drop select2-display-none">   <div class="select2-search select2-search-hidden select2-offscreen">       <input type="text" autocomplete="off" autocorrect="off" autocapitilize="off" spellcheck="false" class="select2-input" data-original-title="" title="">   </div>   <ul class="select2-results">   </ul></div></div><input type="hidden" id="select-lang" tabindex="-1" class="select2-offscreen" value="cpp" data-original-title="" title="">
    </div>
    <div class="clearfix"></div>
  </div>
</div>

<div class="version-timeline">
  <div class="version-timeline-inner">
    <div class="cross-line"></div>
    <div class="start-slab pull-left"></div>
    
    <div class="current-version-ball green-bkg pull-left cursor"></div>
  </div>
</div>
<div class="hr_tour-code-solution movable-hand flex-row" style="display: flex;">
  
  <div class="code-checker">
    <div id="notification-message" class="clearfix grey-header cap  hidden "> </div>
    <div class="code-editors" style="max-height: 1140px;">
      
       <div class="loading-mode" style="display: none;">Loading Editor... </div> 
      <div class="code-body" style="display: block;">
        
       <textarea id="codeview" style="width: 100%; display: none;"></textarea><div class="CodeMirror cm-s-default CodeMirror-wrap                                                                                           "><div style="overflow: hidden; position: relative; width: 3px; height: 0px; top: 45px; left: 43px;"><textarea autocorrect="off" autocapitalize="off" spellcheck="false" style="position: absolute; padding: 0px; width: 1000px; height: 1em; outline: none;" tabindex="0"></textarea></div><div class="CodeMirror-hscrollbar" style="left: 38px;"><div style="height: 100%; min-height: 1px; width: 0px;"></div></div><div class="CodeMirror-vscrollbar" style="bottom: 0px;"><div style="min-width: 1px; height: 0px;"></div></div><div class="CodeMirror-scrollbar-filler"></div><div class="CodeMirror-gutter-filler"></div><div class="CodeMirror-scroll" tabindex="-1" draggable="false"><div class="CodeMirror-sizer" style="margin-left: 38px; min-height: 0px;"><div style="position: relative; top: 0px;"><div class="CodeMirror-lines"><div style="position: relative; outline: none;"><div class="CodeMirror-measure"><pre><span>xxxxxxxxxx</span></pre></div><div class="CodeMirror-measure"></div><div style="position: relative; z-index: 1;"></div><div class="CodeMirror-cursors"><div class="CodeMirror-cursor" style="left: 4px; top: 40px; height: 20px;">&nbsp;</div></div><div class="CodeMirror-code"><div class="" style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">1</div></div><pre class=""><span style="padding-right: 0.1px;"><span class="cm-meta">#include &lt;cmath&gt;</span></span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">2</div></div><pre class=""><span style="padding-right: 0.1px;"><span class="cm-meta">#include &lt;iostream&gt;</span></span></pre></div><div class="CodeMirror-activeline" style="position: relative;"><div class="CodeMirror-activeline-background CodeMirror-linebackground"></div><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">3</div></div><pre class=""><span style="padding-right: 0.1px;"><span class="cm-keyword">using</span> <span class="cm-keyword">namespace</span> <span class="cm-variable">std</span>;</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">4</div><div class="CodeMirror-gutter-elt" style="left: 28px; width: 9px;"><div class="CodeMirror-foldgutter-open CodeMirror-guttermarker-subtle"></div></div></div><pre><span style="padding-right: 0.1px;"><span class="cm-keyword">int</span> <span class="cm-variable">check</span>(<span class="cm-keyword">int</span> <span class="cm-variable">a</span>[],<span class="cm-keyword">int</span> <span class="cm-variable">n</span>){</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">5</div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp;  <span class="cm-keyword">int</span> <span class="cm-variable">flag</span><span class="cm-operator">=</span><span class="cm-number">0</span>;</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">6</div><div class="CodeMirror-gutter-elt" style="left: 28px; width: 9px;"><div class="CodeMirror-foldgutter-open CodeMirror-guttermarker-subtle"></div></div></div><pre><span style="padding-right: 0.1px;"> &nbsp;  <span class="cm-keyword">for</span>(<span class="cm-keyword">int</span> <span class="cm-variable">i</span><span class="cm-operator">=</span><span class="cm-number">0</span>;<span class="cm-variable">i</span><span class="cm-operator">&lt;</span><span class="cm-variable">n</span><span class="cm-operator">-</span><span class="cm-number">1</span>;<span class="cm-variable">i</span><span class="cm-operator">++</span>){</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">7</div><div class="CodeMirror-gutter-elt" style="left: 28px; width: 9px;"><div class="CodeMirror-foldgutter-open CodeMirror-guttermarker-subtle"></div></div></div><pre><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp;  <span class="cm-keyword">if</span>(<span class="cm-variable">a</span>[<span class="cm-variable">i</span>]<span class="cm-operator">&gt;</span><span class="cm-variable">a</span>[<span class="cm-variable">i</span><span class="cm-operator">+</span><span class="cm-number">1</span>]){</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">8</div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  <span class="cm-keyword">return</span> <span class="cm-number">1</span>;</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">9</div></div><pre><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp;  }</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">10</div></div><pre><span style="padding-right: 0.1px;"> &nbsp;  }</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">11</div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp;  <span class="cm-keyword">return</span> <span class="cm-number">0</span>;</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">12</div></div><pre><span style="padding-right: 0.1px;">}</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">13</div></div><pre class=""><span style="padding-right: 0.1px;"><span>​</span></span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">14</div><div class="CodeMirror-gutter-elt" style="left: 28px; width: 9px;"><div class="CodeMirror-foldgutter-open CodeMirror-guttermarker-subtle"></div></div></div><pre><span style="padding-right: 0.1px;"><span class="cm-keyword">int</span> <span class="cm-variable">main</span>(){</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">15</div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp;  <span class="cm-keyword">int</span> <span class="cm-variable">t</span>;</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">16</div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp;  <span class="cm-variable">cin</span> <span class="cm-operator">&gt;&gt;</span> <span class="cm-variable">t</span>;</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">17</div><div class="CodeMirror-gutter-elt" style="left: 28px; width: 9px;"><div class="CodeMirror-foldgutter-open CodeMirror-guttermarker-subtle"></div></div></div><pre><span style="padding-right: 0.1px;"> &nbsp;  <span class="cm-keyword">while</span>(<span class="cm-variable">t</span><span class="cm-operator">--</span>){</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">18</div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp;  <span class="cm-keyword">int</span> <span class="cm-variable">n</span>;</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">19</div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp;  <span class="cm-variable">cin</span><span class="cm-operator">&gt;&gt;</span><span class="cm-variable">n</span>;</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">20</div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp;  <span class="cm-keyword">int</span> <span class="cm-variable">a</span>[<span class="cm-variable">n</span><span class="cm-operator">+</span><span class="cm-number">1</span>],<span class="cm-variable">b</span>[<span class="cm-variable">n</span><span class="cm-operator">+</span><span class="cm-number">1</span>],<span class="cm-variable">count</span>[<span class="cm-variable">n</span><span class="cm-operator">+</span><span class="cm-number">1</span>]<span class="cm-operator">=</span>{<span class="cm-number">0</span>},<span class="cm-variable">c</span><span class="cm-operator">=</span><span class="cm-number">0</span>;</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">21</div><div class="CodeMirror-gutter-elt" style="left: 28px; width: 9px;"><div class="CodeMirror-foldgutter-open CodeMirror-guttermarker-subtle"></div></div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp;  <span class="cm-keyword">for</span>(<span class="cm-keyword">int</span> <span class="cm-variable">i</span><span class="cm-operator">=</span><span class="cm-number">0</span>;<span class="cm-variable">i</span><span class="cm-operator">&lt;</span><span class="cm-variable">n</span>;<span class="cm-variable">i</span><span class="cm-operator">++</span>){</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">22</div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  <span class="cm-variable">cin</span><span class="cm-operator">&gt;&gt;</span><span class="cm-variable">a</span>[<span class="cm-variable">i</span>];</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">23</div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  <span class="cm-variable">b</span>[<span class="cm-variable">i</span>]<span class="cm-operator">=</span><span class="cm-variable">i</span><span class="cm-operator">+</span><span class="cm-number">1</span>;</span></pre></div><div class="" style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">24</div></div><pre><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp;  }</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">25</div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp;  <span class="cm-keyword">int</span> <span class="cm-variable">flag</span>,<span class="cm-variable">done</span><span class="cm-operator">=</span><span class="cm-number">0</span>;</span></pre></div><div class="" style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">26</div><div class="CodeMirror-gutter-elt" style="left: 28px; width: 9px;"><div class="CodeMirror-foldgutter-open CodeMirror-guttermarker-subtle"></div></div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp;  <span class="cm-keyword">for</span>(<span class="cm-keyword">int</span> <span class="cm-variable">k</span><span class="cm-operator">=</span><span class="cm-number">0</span>;<span class="cm-variable">k</span><span class="cm-operator">&lt;</span><span class="cm-number">2</span>;<span class="cm-variable">k</span><span class="cm-operator">++</span>){</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">27</div><div class="CodeMirror-gutter-elt" style="left: 28px; width: 9px;"><div class="CodeMirror-foldgutter-open CodeMirror-guttermarker-subtle"></div></div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  <span class="cm-keyword">for</span>(<span class="cm-keyword">int</span> <span class="cm-variable">j</span><span class="cm-operator">=</span><span class="cm-variable">n</span><span class="cm-operator">-</span><span class="cm-number">1</span>;<span class="cm-variable">j</span><span class="cm-operator">&gt;</span><span class="cm-number">0</span>;<span class="cm-variable">j</span><span class="cm-operator">--</span>){</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">28</div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; </span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">29</div><div class="CodeMirror-gutter-elt" style="left: 28px; width: 9px;"><div class="CodeMirror-foldgutter-open CodeMirror-guttermarker-subtle"></div></div></div><pre><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  <span class="cm-keyword">if</span>(<span class="cm-variable">a</span>[<span class="cm-variable">j</span>]<span class="cm-operator">&lt;</span><span class="cm-variable">a</span>[<span class="cm-variable">j</span><span class="cm-operator">-</span><span class="cm-number">1</span>]){ &nbsp; </span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">30</div></div><pre><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  <span class="cm-variable">count</span>[<span class="cm-variable">a</span>[<span class="cm-variable">j</span><span class="cm-operator">-</span><span class="cm-number">1</span>]]<span class="cm-operator">++</span>;</span></pre></div><div class="" style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">31</div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  <span class="cm-keyword">if</span>(<span class="cm-variable">count</span>[<span class="cm-variable">a</span>[<span class="cm-variable">j</span><span class="cm-operator">-</span><span class="cm-number">1</span>]]<span class="cm-operator">&gt;</span><span class="cm-number">2</span>){<span class="cm-variable">done</span><span class="cm-operator">=</span><span class="cm-number">1</span>;<span class="cm-keyword">break</span>;}</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">32</div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  <span class="cm-keyword">int</span> <span class="cm-variable">temp</span><span class="cm-operator">=</span><span class="cm-variable">a</span>[<span class="cm-variable">j</span>];</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">33</div></div><pre><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  <span class="cm-variable">a</span>[<span class="cm-variable">j</span>]<span class="cm-operator">=</span><span class="cm-variable">a</span>[<span class="cm-variable">j</span><span class="cm-operator">-</span><span class="cm-number">1</span>];</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">34</div></div><pre><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  <span class="cm-variable">a</span>[<span class="cm-variable">j</span><span class="cm-operator">-</span><span class="cm-number">1</span>]<span class="cm-operator">=</span><span class="cm-variable">temp</span>;</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">35</div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  <span class="cm-variable">c</span><span class="cm-operator">++</span>;</span></pre></div><div class="" style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">36</div></div><pre><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  }</span></pre></div><div class="" style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">37</div></div><pre><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  <span class="cm-variable">flag</span><span class="cm-operator">=</span><span class="cm-variable">check</span>(<span class="cm-variable">a</span>,<span class="cm-variable">n</span>);</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">38</div></div><pre><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  <span class="cm-keyword">if</span>(<span class="cm-variable">flag</span><span class="cm-operator">==</span><span class="cm-number">0</span>)<span class="cm-keyword">break</span>;</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">39</div></div><pre><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  <span class="cm-keyword">if</span>(<span class="cm-variable">done</span><span class="cm-operator">==</span><span class="cm-number">1</span>)<span class="cm-keyword">break</span>;</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">40</div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  }  </span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">41</div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; <span class="cm-keyword">if</span>(<span class="cm-variable">flag</span><span class="cm-operator">==</span><span class="cm-number">0</span>)<span class="cm-keyword">break</span>;</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">42</div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  <span class="cm-keyword">if</span>(<span class="cm-variable">done</span><span class="cm-operator">==</span><span class="cm-number">1</span>)<span class="cm-keyword">break</span>;</span></pre></div><div class="" style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">43</div></div><pre><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp;  }</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">44</div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp;  <span class="cm-keyword">if</span>(<span class="cm-variable">done</span><span class="cm-operator">==</span><span class="cm-number">1</span>)<span class="cm-variable">cout</span><span class="cm-operator">&lt;&lt;</span><span class="cm-string">"Too chaotic"</span><span class="cm-operator">&lt;&lt;</span><span class="cm-variable">endl</span>;</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">45</div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp;  <span class="cm-keyword">else</span></span></pre></div><div class="" style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">46</div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  <span class="cm-variable">cout</span><span class="cm-operator">&lt;&lt;</span><span class="cm-variable">c</span><span class="cm-operator">&lt;&lt;</span><span class="cm-variable">endl</span>;</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">47</div></div><pre><span style="padding-right: 0.1px;"> &nbsp;  }</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">48</div></div><pre class=""><span style="padding-right: 0.1px;"> &nbsp;  <span class="cm-keyword">return</span> <span class="cm-number">0</span>;</span></pre></div><div style="position: relative;" class=""><div class="CodeMirror-gutter-wrapper" style="position: absolute; left: -38px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 20px;">49</div></div><pre><span style="padding-right: 0.1px;">}</span></pre></div></div></div></div></div></div><div style="position: absolute; height: 30px; width: 1px; top: 0px;"></div><div class="CodeMirror-gutters" style="height: 988px;"><div class="CodeMirror-gutter CodeMirror-linenumbers" style="width: 28px;"></div><div class="CodeMirror-gutter CodeMirror-foldgutter"></div></div></div></div>
       </div>
      
      <div class="clearfix"></div>
    </div>
    <div id="codeeditor-statusbar" class="clearfix psA codeeditor_statusbar">
      <span id="statusbar-mode"></span>
      <div class="pull-right">
        <span id="statusbar-line">Line: 3</span>
        <span id="statusbar-col">Col: 1</span>
        <span id="statusbar-count"></span>
      </div>
    </div>
  </div>
</div><div class="clearfix pmR pmL pmB plT fixed-hand1 codeshell-footer">
  <div class="pull-right">
    
    
    <button class="btn bb-compile msR" data-analytics="Compile and Test">Run Code</button>
    
    
    <button class="btn btn-primary bb-submit ans-submit" data-analytics="Submit Code">Submit Code</button>
    
  </div>
  <div class="pull-left inline">
      
      <button class="btn btn-text upload_file mlR" data-analytics="Upload File" type="button"><i class="icon-upload"></i>Upload Code as File</button>
      
      
      
      <div class="mmT">
          <label for="customtestcase"><input type="checkbox" id="customtestcase" data-original-title="" title=""><span class="lmT msL">Test against custom input</span></label>
          <textarea rows="5" id="custominput" style="display: none;"></textarea>
      </div>
      
  </div>
</div></div><div id="submission-message"></div></div>
</div><div class="challenge-response container fs-container"><h5 class="output-progress padded light-wrap hide mlT mlB psT"></h5>
<div class="output-area-wrap hide" style="display: block;">
  <div class="output-area mlT psT" id="output-area"><div class="pjB mjB">
  <div id="submission-stats-container" class="submissions-details"><div id="submission-stats-content" class="submission-stats2-content">
    
    <div class="light-wrap plA mlT clearfix" style="min-height: 100px;">
        <div class="row">
            
            <span class="status-message block-center text-center bold large color-orange psR">Wrong Answer</span>
            

            
            
            <div class="psT psB block-center mlB checker-progress-bar-wrap">
                <div class="checker-progress-bar " style="display: none;">
                    <div class="fill-bar full-bar" style="width: 100%;"></div>
                    <div class="blank-bar" style="width: 0%;"></div>
                    <div class="clearfix"></div>
                </div>
            </div>
            

            
        </div>
        
        
        
        <div class="submission_testcases-results ab-testcase clearfix">
            
            <div class="testcase-card-wrap">
                <div class="testcase-card" id="testcase-card-0">
                    

                    <div style="width: 25px; display: inline-block;">
                        <i class="testcase-icon icon-cancel-large error"></i>
                    </div>
                    <span class="testcase-num">Test Case #0</span>
                    <div class="testcase-message-wrap align-center m">
                        <div class="testcase-message">
                            
                                <div class="type">Sample</div>
                            
                            

                            <div class="message-text">Wrong Answer</div>

                            
                                <a class="js-download-test-case download cursor" testcase-num="0" data-analytics="TestCase Purchase">Download<i class="pmL icon-download"></i></a>
                            
                        </div>
                    </div>
                </div>
            </div>
            
            <div class="testcase-card-wrap">
                <div class="testcase-card" id="testcase-card-1">
                    

                    <div style="width: 25px; display: inline-block;">
                        <i class="testcase-icon icon-cancel-large error"></i>
                    </div>
                    <span class="testcase-num">Test Case #1</span>
                    <div class="testcase-message-wrap align-center m">
                        <div class="testcase-message">
                            
                            

                            <div class="message-text">Wrong Answer</div>

                            
                                <a class="js-download-test-case download cursor" testcase-num="1" data-analytics="TestCase Purchase">Download<i class="pmL icon-download"></i></a>
                            
                        </div>
                    </div>
                </div>
            </div>
            
            <div class="testcase-card-wrap">
                <div class="testcase-card" id="testcase-card-2">
                    

                    <div style="width: 25px; display: inline-block;">
                        <i class="testcase-icon icon-ok success"></i>
                    </div>
                    <span class="testcase-num">Test Case #2</span>
                    <div class="testcase-message-wrap align-center m">
                        <div class="testcase-message">
                            
                            

                            <div class="message-text">Success</div>

                            
                                <a class="js-download-test-case download cursor" testcase-num="2" data-analytics="TestCase Purchase">Download<i class="pmL icon-download"></i></a>
                            
                        </div>
                    </div>
                </div>
            </div>
            
            <div class="testcase-card-wrap">
                <div class="testcase-card" id="testcase-card-3">
                    

                    <div style="width: 25px; display: inline-block;">
                        <i class="testcase-icon icon-cancel-large error"></i>
                    </div>
                    <span class="testcase-num">Test Case #3</span>
                    <div class="testcase-message-wrap align-center m">
                        <div class="testcase-message">
                            
                            

                            <div class="message-text">Wrong Answer</div>

                            
                                <a class="js-download-test-case download cursor" testcase-num="3" data-analytics="TestCase Purchase">Download<i class="pmL icon-download"></i></a>
                            
                        </div>
                    </div>
                </div>
            </div>
            
            <div class="testcase-card-wrap">
                <div class="testcase-card" id="testcase-card-4">
                    

                    <div style="width: 25px; display: inline-block;">
                        <i class="testcase-icon icon-cancel-large error"></i>
                    </div>
                    <span class="testcase-num">Test Case #4</span>
                    <div class="testcase-message-wrap align-center m">
                        <div class="testcase-message">
                            
                            

                            <div class="message-text">Wrong Answer</div>

                            
                                <a class="js-download-test-case download cursor" testcase-num="4" data-analytics="TestCase Purchase">Download<i class="pmL icon-download"></i></a>
                            
                        </div>
                    </div>
                </div>
            </div>
            
            <div class="testcase-card-wrap">
                <div class="testcase-card" id="testcase-card-5">
                    

                    <div style="width: 25px; display: inline-block;">
                        <i class="testcase-icon icon-cancel-large error"></i>
                    </div>
                    <span class="testcase-num">Test Case #5</span>
                    <div class="testcase-message-wrap align-center m">
                        <div class="testcase-message">
                            
                            

                            <div class="message-text">Wrong Answer</div>

                            
                                <a class="js-download-test-case download cursor" testcase-num="5" data-analytics="TestCase Purchase">Download<i class="pmL icon-download"></i></a>
                            
                        </div>
                    </div>
                </div>
            </div>
            
            <div class="testcase-card-wrap">
                <div class="testcase-card" id="testcase-card-6">
                    

                    <div style="width: 25px; display: inline-block;">
                        <i class="testcase-icon icon-cancel-large error"></i>
                    </div>
                    <span class="testcase-num">Test Case #6</span>
                    <div class="testcase-message-wrap align-center m">
                        <div class="testcase-message">
                            
                            

                            <div class="message-text">Wrong Answer</div>

                            
                                <a class="js-download-test-case download cursor" testcase-num="6" data-analytics="TestCase Purchase">Download<i class="pmL icon-download"></i></a>
                            
                        </div>
                    </div>
                </div>
            </div>
            
            <div class="testcase-card-wrap">
                <div class="testcase-card" id="testcase-card-7">
                    

                    <div style="width: 25px; display: inline-block;">
                        <i class="testcase-icon icon-cancel-large error"></i>
                    </div>
                    <span class="testcase-num">Test Case #7</span>
                    <div class="testcase-message-wrap align-center m">
                        <div class="testcase-message">
                            
                            

                            <div class="message-text">Wrong Answer</div>

                            
                                <a class="js-download-test-case download cursor" testcase-num="7" data-analytics="TestCase Purchase">Download<i class="pmL icon-download"></i></a>
                            
                        </div>
                    </div>
                </div>
            </div>
            
            <div class="testcase-card-wrap">
                <div class="testcase-card" id="testcase-card-8">
                    

                    <div style="width: 25px; display: inline-block;">
                        <i class="testcase-icon icon-cancel-large error"></i>
                    </div>
                    <span class="testcase-num">Test Case #8</span>
                    <div class="testcase-message-wrap align-center m">
                        <div class="testcase-message">
                            
                            

                            <div class="message-text">Wrong Answer</div>

                            
                                <a class="js-download-test-case download cursor" testcase-num="8" data-analytics="TestCase Purchase">Download<i class="pmL icon-download"></i></a>
                            
                        </div>
                    </div>
                </div>
            </div>
            
            <div class="testcase-card-wrap">
                <div class="testcase-card" id="testcase-card-9">
                    

                    <div style="width: 25px; display: inline-block;">
                        <i class="testcase-icon icon-cancel-large error"></i>
                    </div>
                    <span class="testcase-num">Test Case #9</span>
                    <div class="testcase-message-wrap align-center m">
                        <div class="testcase-message">
                            
                            

                            <div class="message-text">Wrong Answer</div>

                            
                                <a class="js-download-test-case download cursor" testcase-num="9" data-analytics="TestCase Purchase">Download<i class="pmL icon-download"></i></a>
                            
                        </div>
                    </div>
                </div>
            </div>
            
            <div class="testcase-card-wrap">
                <div class="testcase-card" id="testcase-card-10">
                    

                    <div style="width: 25px; display: inline-block;">
                        <i class="testcase-icon icon-cancel-large error"></i>
                    </div>
                    <span class="testcase-num">Test Case #10</span>
                    <div class="testcase-message-wrap align-center m">
                        <div class="testcase-message">
                            
                            

                            <div class="message-text">Wrong Answer</div>

                            
                                <a class="js-download-test-case download cursor" testcase-num="10" data-analytics="TestCase Purchase">Download<i class="pmL icon-download"></i></a>
                            
                        </div>
                    </div>
                </div>
            </div>
            
        </div>
        
        
        <div class="stats-card-footer">
            
            <a class="js-try-again mlL btn btn-large pull-right">Try Again</a>
            
        </div>
    </div>
    
    
</div>
</div>

  <div id="submission-score-container">
  </div>

  <div id="response-footer-container">
  </div>
</div>
</div>
</div></div><div class="challenge-copyright"><p class="text-center mlB" style="font-size: 10px"> Copyright © 2016
          HackerRank. All Rights Reserved</p>
</div></div></div>
    </section>
</div>
</div></div>
        <div id="hacker"></div>
    </div>
    <div id="autocomplete-container" style="position:absolute; width: 330px; z-index: 2000; padding-top: 1px;"><ul class="ui-autocomplete ui-front ui-menu ui-widget ui-widget-content no-padding" id="ui-id-22" tabindex="0" style="display: none;"></ul></div>
    <footer class="page_footer">
    <div>
        <div class="text-center">
            Join us on IRC at <a target="_blank" class="page_footer-IRC" href="http://webchat.freenode.net/?channels=hackerrank" data-analytics="FooterLinkIRC">#hackerrank</a> on freenode for hugs or bugs.
            <br>
            <p style="font-size: 14px; margin-top: 5px; margin-bottom: 0px;"><span class="internal-links"><a target="_blank" href="https://www.hackerrank.com/calendar" class="calendar" data-analytics="FooterLinkCalendar">Contest Calendar</a> | <a target="_blank" href="https://blog.hackerrank.com/" class="blog" data-analytics="FooterLinkBlog">Blog</a> | <a target="_blank" href="https://www.hackerrank.com/scoring" class="scoring" data-analytics="FooterLinkScoring">Scoring</a> | <a target="_blank" href="https://www.hackerrank.com/environment" class="environment" data-analytics="FooterLinkEnvironment">Environment</a> | <a target="_blank" href="https://www.hackerrank.com/faq" class="faq" data-analytics="FooterLinkFAQ">FAQ</a> |</span> <a target="_blank" href="https://www.hackerrank.com/aboutus" data-analytics="FooterLinkAboutUs">About Us</a> | <a target="_blank" href="https://www.hackerrank.com/support" data-analytics="FooterLinkSupport">Support</a> | <a target="_blank" href="https://www.hackerrank.com/careers" data-analytics="FooterLinkCareers">Careers</a> | <a target="_blank" href="https://www.hackerrank.com/terms-of-service" data-analytics="FooterLinkTermsOfService">Terms Of Service</a> | <a target="_blank" href="https://www.hackerrank.com/privacy" data-analytics="FooterLinkPrivacyPolicy">Privacy Policy</a> | <a href="https://www.hackerrank.com/support/feature" target="_blank" class="featureRequestButton" data-analytics="FooterLinkFeatureRequest">Request a Feature</a></p>
        </div>
    </div>
</footer>

    <ol id="hr_tour-intro-tour" class="hide">
        <li data-class="hr_tour-challenge-name" data-options="tipLocation:bottom"><h5 class="walkthrough-header">Challenge Walkthrough</h5><span class="walkthrough-text">Let's walk through this sample challenge and explore the features of the code editor.</span><span class="walkthrough-progress">1 of 6</span></li>
        <li data-class="hr_tour-problem-statement" data-options="tipLocation:top"><h5 class="walkthrough-header">Review the problem statement</h5><span class="walkthrough-text">Each challenge has a problem statement that includes sample inputs and outputs. Some challenges include additional information to help you out.</span><span class="walkthrough-progress">2 of 6</span></li>
        <li data-class="hr_tour-select-language" data-options="tipLocation:left"><h5 class="walkthrough-header">Choose a language</h5><span class="walkthrough-text">Select the language you wish to use to solve this challenge.</span><span class="walkthrough-progress">3 of 6</span></li>
        <li data-class="hr_tour-code-solution" data-options="tipLocation:top"><h5 class="walkthrough-header">Enter your code</h5><span class="walkthrough-text">Code your solution in our custom editor or code in your own environment and upload your solution as a file.</span><span class="walkthrough-progress">4 of 6</span></li>
        <li data-class="hr_tour-compile-test" data-options="tipLocation:left"><h5 class="walkthrough-header">Test your code</h5><span class="walkthrough-text">You can compile your code and test it for errors and accuracy before submitting.</span><span class="walkthrough-progress">5 of 6</span></li>
        <li data-class="hr_tour-submit-code" data-button="Done" data-options="tipLocation:left"><h5 class="walkthrough-header">Submit to see results</h5><span class="walkthrough-text">When you're ready, submit your solution! Remember, you can go back and refine your code anytime.</span><span class="walkthrough-progress">6 of 6</span></li>
    </ol>
    <ol id="hr_tour-intro-part-2-tour" class="hide">
        <li data-class="hr_tour-leaderboard">Check your score</li>
    </ol>
    <script type="text/javascript">
     // disable forum social interaction
     HR.disable_fsi = false;
    </script>

    <script type="text/javascript">
      // Setting up jobs constants for use in frontend
      // Jobs visa constants - visa's accepted by company
      HR.VISA_TYPE_NONE = 0
      HR.VISA_TYPE_ALL = 1
      HR.VISA_TYPE_US_RESIDENT = 2
    </script>


    <!-- Load Jquery -->
  <script src="./New Year Chaos _files/base-561e8e14c0bd0f61538ae5040037a1af.js"></script>
  <!-- failsafe -->
<script>
 if (typeof(jQuery) != "function" && !jsCookies.get("jQueryError") && (window.location.href.split("jQueryError=1").length == 1)) {
   // set 10 mins cookie
   var current_cdn = jsCookies.get("cdn_url");
   jsCookies.set("jQueryError", 1, 0, 0, 10);
   jsCookies.set("cdn_url", 1, 0, -1);

   // reload the page
   separator = (window.location.href.split("?").length > 1) ? "&" : "?";
   if (navigator.appName == "Microsoft Internet Explorer") {
     window.document.execCommand('Stop');
   } else {
     window.stop();
   }
   window.location.href = window.location.href + separator + "jQueryError=1&current_cdn=" + encodeURIComponent(current_cdn);

   //stop JavaScript execution
   throw new Error("StopExec");
 } else {
   // if it worked, remove jQueryError
   if (jsCookies.get("jQueryError")) {
     jsCookies.set("jQueryError", 1, 0, -1);
   }
 }
</script>


    <script crossorigin="anonymous" src="./New Year Chaos _files/hackerrank_libraries-5ac63d1f7fc188233041648f2e0206f0.js"></script>
    <script crossorigin="anonymous" src="./New Year Chaos _files/codeshell-a89fb56778455f81b1f703a80d06c338.js"></script>
    <script crossorigin="anonymous" src="./New Year Chaos _files/hackerrank-58b7085d053e980e6a209f2d27a1c939.js"></script>
    <script crossorigin="anonymous" src="./New Year Chaos _files/set-manifest-16b975c00291b688336365a104f4409779b478d1.js"></script>
    <script crossorigin="anonymous" src="./New Year Chaos _files/require-bb6b6090a92253871baa182a6798936c.js"></script>
    <script crossorigin="anonymous" src="./New Year Chaos _files/dashboard-4482a8bd96266d00e401e4e185edad8b.js"></script>




<!-- jsCookies -->
<script type="text/javascript">
    if("undefined"==typeof jsCookies)var jsCookies={get:function(c_name){if(document.cookie.length>0){var c_start=document.cookie.indexOf(c_name+"=");if(-1!=c_start){c_start=c_start+c_name.length+1;var c_end=document.cookie.indexOf(";",c_start);return-1==c_end&&(c_end=document.cookie.length),unescape(document.cookie.substring(c_start,c_end))}}return""},set:function(c_name,value,expiredays,expirehours,expiremins,expiresecs){var exdate=new Date;exdate.setDate(exdate.getDate()+(expiredays||0)),exdate.setHours(exdate.getHours()+(expirehours||0)),exdate.setMinutes(exdate.getMinutes()+(expiremins||0)),exdate.setSeconds(exdate.getSeconds()+(expiresecs||0));var set_expire_time=!(null==expiredays&&null==expiresecs&&null==expiremins&&null==expirehours);document.cookie=c_name+"="+escape(value)+"; path=/"+(0==set_expire_time?"":"; expires="+exdate.toUTCString())},check:function(c_name){return c_name=jsCookies.get(c_name),null!=c_name&&""!=c_name?!0:!1},destroy:function(c_name){var exdate=new Date;document.cookie=c_name+"=''; path=/; expires="+exdate.toUTCString()}};
</script>

<script>
</script>

<!-- Totango Tracking Code -->
<!-- End Totango Tracking Code -->

<!-- Google Analytics -->
<script type="text/javascript">
  $(window).on("load", function() {
    (function() { var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true; ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js'; var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s); })();
  });
</script>

<!-- Mixpanel -->
<script type="text/javascript">
  $(window).on("load", function() {
    (function(e,b){if(!b.__SV){var a,f,i,g;window.mixpanel=b;a=e.createElement("script");a.type="text/javascript";a.async=!0;a.src=("https:"===e.location.protocol?"https:":"http:")+'//cdn.mxpnl.com/libs/mixpanel-2.2.min.js';f=e.getElementsByTagName("script")[0];f.parentNode.insertBefore(a,f);b._i=[];b.init=function(a,e,d){function f(b,h){var a=h.split(".");2==a.length&&(b=b[a[0]],h=a[1]);b[h]=function(){b.push([h].concat(Array.prototype.slice.call(arguments,0)))}}var c=b;"undefined"!==
typeof d?c=b[d]=[]:d="mixpanel";c.people=c.people||[];c.toString=function(b){var a="mixpanel";"mixpanel"!==d&&(a+="."+d);b||(a+=" (stub)");return a};c.people.toString=function(){return c.toString(1)+".people (stub)"};i="disable track track_pageview track_links track_forms register register_once alias unregister identify name_tag set_config people.set people.increment people.append people.track_charge people.clear_charges people.delete_user".split(" ");for(g=0;g<i.length;g++)f(c,i[g]);b._i.push([a,e,d])};b.__SV=1.2}})(document,window.mixpanel||[]);
    mixpanel.init("bcb75af88bccc92724ac5fd79271e1ff");

    mixpanel.identify(jsCookies.get("hackerrank_mixpanel_token"));
  });
</script>

<script type="text/javascript">
  var heap = [];
  var attrs = ["clearEventProperties","identify","setEventProperties","track","unsetEventProperty"];
  for (var attribute in attrs) {
    heap[attrs[attribute]] = function () {};
  }
</script>





<!-- Filepicker -->
<script type="text/javascript">
  $(window).on("load", function() {
    (function(a){if(window.filepicker){return}var b=a.createElement("script");b.type="text/javascript";b.async=!0;b.src=("https:"===a.location.protocol?"https:":"http:")+"//api.filepicker.io/v1/filepicker.js";var c=a.getElementsByTagName("script")[0];c.parentNode.insertBefore(b,c);var d={};d._queue=[];var e="pick,pickMultiple,read,write,writeUrl,export,convert,store,storeUrl,remove,stat,setKey,constructWidget,makeDropPane".split(",");var f=function(a,b){return function(){b.push([a,arguments])}};for(var g=0;g<e.length;g++){d[e[g]]=f(e[g],d._queue)}window.filepicker=d})(document);
    filepicker.setKey("ApehXMbvXTWqWab7OmMr9z");
  });
</script>

<script type="text/javascript">
  $(window).on("load", function() {
    (function() {
      var _fbq = window._fbq || (window._fbq = []);
      if (!_fbq.loaded) {
        var fbds = document.createElement('script');
        fbds.async = true;
        fbds.src = '//connect.facebook.net/en_US/fbds.js';
        var s = document.getElementsByTagName('script')[0];
        s.parentNode.insertBefore(fbds, s);
        _fbq.loaded = true;
      }
    })();
  });
</script>

<script type="text/javascript">
adroll_adv_id = 'W2R3HE5UDBBVTJG3E7ZFRP';
adroll_pix_id = 'ATGIUYAAYJEHNKTJDQ43Z4';
  $(window).on("load", function() {
    (function () {
      var oldonload = window.onload;
      window.onload = function(){
        __adroll_loaded=true;
        var scr = document.createElement("script");
        var host = (("https:" == document.location.protocol) ? "https://s.adroll.com" : "http://a.adroll.com");
        scr.setAttribute('async', 'true');
        scr.type = "text/javascript";
        scr.src = host + "/j/roundtrip.js";
        ((document.getElementsByTagName('head') || [null])[0] ||
         document.getElementsByTagName('script')[0].parentNode).appendChild(scr);
        if(oldonload){oldonload()}};
    }());
  });
</script>

<!-- bizible -->
<script>
  $(window).on("load", function() {
    (function(d, t) {
      var g = d.createElement(t),
          s = d.getElementsByTagName(t)[0];
      g.src = '//cdn.bizible.com/scripts/bizible.js';
      s.parentNode.insertBefore(g, s);
    }(document, 'script'));
  });
</script>

<script type="text/javascript">
  window.hr_metrics_extension_pack = true;

    !function(obj){window.hr_metrics=obj,obj.loaded=!0,obj.config=obj.config||{},obj._b=obj._b||[],obj.init=function(options){this.config=$.extend({product:null,use_cookie:!1,uid_cookie_key:null,session_cookie_key:null,session_id:null,uid_token:null,uid_token_cookie_key:null,uid:Math.floor(1e12*(1+Math.random())).toString(16)},this.config||{},options||{})},obj.get_session_id=function(){return this.config.session_id?this.config.session_id:this.config.session_cookie_key?$.cookie(this.config.session_cookie_key):null},obj.get_uid_data=function(){return this.config.use_cookie?{uid:$.cookie(this.config.uid_cookie_key),uid_token:$.cookie(this.config.uid_token_cookie_key)}:{uid:this.config.uid,uid_token:this.config.uid_token}},obj.track=function(event_name,event_value,attrs,use_beacon){var common_attrs={session_id:this.get_session_id()},attrs=$.extend({},attrs,common_attrs),_tracking_data=$.extend({product:this.config.product,event_name:event_name,event_value:event_value,params:attrs},this.get_uid_data());this._post_tracking_data(_tracking_data,use_beacon)},obj.batch_track=function(event_name,event_value,attrs,use_beacon){this._EVENT_ARRAY=this._EVENT_ARRAY||[];var common_attrs={session_id:this.get_session_id()},attrs=$.extend({},attrs,common_attrs),_tracking_data={event_name:event_name,event_value:event_value,params:attrs};this._EVENT_ARRAY.push({time:(new Date).getTime(),url:document.location.href,track_data:_tracking_data}),this._event_batch_track_id||(this._event_batch_track_id=window.setInterval(function(that){return function(){that.batch_track_record()}}(this),2e3))},obj.batch_track_record=function(use_beacon){if("object"==typeof this._EVENT_ARRAY&&this._EVENT_ARRAY.length>0){var _tracking_data_array=this._EVENT_ARRAY;this._EVENT_ARRAY=[];var _tracking_data=$.extend({product:this.config.product,batch_request:"true",current_time:(new Date).getTime(),data_array:JSON.stringify(_tracking_data_array)},this.get_uid_data());this._post_tracking_data(_tracking_data,use_beacon)}},obj._post_tracking_data=function(data,use_beacon){var metrics_endpoint="https://metrics.hackerrank.com/metrics";if(window.HR&&window.HR.development&&(metrics_endpoint="/metrics"),use_beacon===!0&&"object"==typeof window.navigator&&"function"==typeof window.navigator.sendBeacon){var _json_blob=new Blob([JSON.stringify(data)],{type:"application/json; charset=UTF-8"});window.navigator.sendBeacon(metrics_endpoint,_json_blob)}else $.ajax({type:"POST",url:metrics_endpoint,crossDomain:!0,xhrFields:{withCredentials:!0},beforeSend:function(xhr){return!0},data:data})},function(o){if(Array.isArray(o._b)){for(var i=0;i<o._b.length;i++){var e=o._b[i];o[e[0]]&&"function"==typeof o[e[0]]&&o[e[0]].apply(o,e[1])}o._b=[]}}(obj)}(window.hr_metrics||{});

  (function() {
    hr_metrics.init({
      product: 'hackerrank',
      use_cookie: true,
      uid_cookie_key: 'hackerrank_mixpanel_token',
      uid_token_cookie_key: 'metrics_user_identifier',
      session_cookie_key: 'session_id'
    });
  })();

    !function(obj){window.hr_metrics=obj,obj.externalService=function(event_type,event_value,attrs,service){attrs="undefined"!=typeof attrs?attrs:{},attrs.session_id=this.get_session_id(),service="undefined"!=typeof service?service:"mixpanel:heap",external_services=service.split(":"),-1!=$.inArray("mixpanel",external_services)&&mixpanel.push([event_type,event_value,attrs])},obj.app_track=function(key,attrs){window.APP_METRICS=window.APP_METRICS||[],common_attrs={uid:$.cookie("hackerrank_mixpanel_token")},attrs=$.extend({},attrs,common_attrs),window.APP_METRICS.push({key:key,meta_data:attrs}),window.app_track_interval_id||(window.app_track_interval_id=window.setInterval(hr_metrics._send_app_track_data,5e3))},obj._send_app_track_data=function(){if(window.APP_METRICS&&window.APP_METRICS.constructor===Array&&!(window.APP_METRICS.length<=0)){var track_data={data:window.APP_METRICS};window.APP_METRICS=[];var metrics_endpoint="https://metrics.hackerrank.com/app_metrics";window.HR&&window.HR.development&&(metrics_endpoint="/app_metrics"),"function"==typeof moment&&"function"==typeof moment.tz&&(track_data.local_timezone=moment.tz.guess()),$.ajax({type:"POST",url:metrics_endpoint,crossDomain:!0,xhrFields:{withCredentials:!0},beforeSend:function(xhr){return!0},data:JSON.stringify(track_data),dataType:"json",contentType:"application/json"})}},obj.track_dwell_time=function(pathname,use_beacon){if(this._navigation_data&&this._navigation_data.page==pathname){var time_now=(new Date).getTime();this.batch_track("DwellTime",pathname,{attribute7:parseInt((time_now-(this._navigation_data.time||time_now))/1e3)},use_beacon)}},obj.set_navigation_data=function(pathname){this._navigation_data={page:pathname||document.location.pathname,time:(new Date).getTime()}},window.APP_METRIC_TRACKING_ENABLED&&"performance"in window&&"timing"in window.performance&&$(window).on("load",function(){setTimeout(function(){timing=window.performance.timing,obj={referring_url:window.location.pathname,fullLoadTime:timing.loadEventEnd-timing.navigationStart,loadTime:timing.loadEventEnd-timing.fetchStart,domReadyTime:timing.domComplete-timing.domInteractive,readyStart:timing.fetchStart-timing.navigationStart,redirectTime:timing.redirectEnd-timing.redirectStart,appcacheTime:timing.domainLookupStart-timing.fetchStart,unloadEventTime:timing.unloadEventEnd-timing.unloadEventStart,lookupDomainTime:timing.domainLookupEnd-timing.domainLookupStart,connectTime:timing.connectEnd-timing.connectStart,requestTime:timing.responseEnd-timing.requestStart,initDomTreeTime:timing.domInteractive-timing.responseEnd,loadEventTime:timing.loadEventEnd-timing.loadEventStart},"navigation"in window.performance&&"getEntries"in window.performance&&(obj.navigationType=window.performance.navigation.type,obj.navigationRedirectCount=window.performance.navigation.redirectCount,obj.fullLoadTime>8e3&&(obj.networkRequests=window.performance.getEntries().map(function(e){return e.toJSON()}))),hr_metrics.app_track("page-load-metrics",obj)},1e3)})}(window.hr_metrics||{}),function(){"function"==typeof $&&window.hr_metrics_extension_pack&&$(window).on("load",function(){var _pathname=document.location.pathname,cdn_url_switched=jsCookies.get("cdn_url_switched");""!==cdn_url_switched&&jsCookies.destroy("cdn_url_switched"),hr_metrics.batch_track("PageLoad",_pathname+document.location.search,{attribute1:_pathname,attribute6:cdn_url_switched,cdn_url:jsCookies.get("cdn_url")}),hr_metrics.track_dwell_time&&(hr_metrics.track_dwell_time(_pathname),hr_metrics.set_navigation_data()),$(window).on("beforeunload",function(){var _pathname=document.location.pathname;hr_metrics.batch_track("PageClose",_pathname+document.location.search,{attribute2:_pathname},!0),hr_metrics.track_dwell_time&&hr_metrics.track_dwell_time(_pathname,!0),window.HR&&window.HR.time_to_solve&&window.HR.time_to_solve.finish&&window.HR.time_to_solve.finish(),window.typingTimeout&&(window.clearTimeout(window.typingTimeout),window.triggerTypingEvent&&window.typingEventEnabled&&window.triggerTypingEvent()),hr_metrics.batch_track_record(!0)}),window.HR&&(window.HR.pause_event=function(){window.HR&&window.HR.time_to_solve&&window.HR.time_to_solve.pause&&window.HR.time_to_solve.pause()},window.HR.unpause_event=function(){window.HR&&window.HR.time_to_solve&&window.HR.time_to_solve.unpause&&window.HR.time_to_solve.unpause()},window.HR.throttled_time_to_solve_unpause=_.throttle(function(){window.HR&&window.HR.time_to_solve&&(window.HR.time_to_solve.paused&&window.HR.time_to_solve.unpause(),window.HR.time_to_solve.update(),window.HR.time_to_solve_timeout&&window.clearTimeout(window.HR.time_to_solve_timeout),window.HR.time_to_solve_timeout=window.setTimeout(function(){window.HR&&window.HR.pause_event&&window.HR.pause_event()},3e4))},2e3)),$(window).on("blur",function(){window.HR&&window.HR.pause_event&&window.HR.pause_event()}),$(window).on("focus",function(){window.HR&&window.HR.unpause_event&&window.HR.unpause_event()}),$(window).on("keydown mousemove scroll",function(){window.HR&&window.HR.throttled_time_to_solve_unpause&&window.HR.throttled_time_to_solve_unpause()})})}();

  //tracking hrutm_ parameters
  $(window).on("load", function() {
    (function(){
      var sPageURL = window.location.search.substring(1);
      var sURLVariables = sPageURL.split('&');
      var trackingData;
      for(var i = 0; i < sURLVariables.length; i++) {
        var sParameterName = sURLVariables[i].split('=');
        if(sParameterName[0] == 'utm_source') {
          trackingData = decodeURIComponent(escape(sParameterName[1]));
          hr_metrics.track(trackingData.event_name, trackingData)
        } else if (sParameterName[0] == 'ad-campaign' && sParameterName[1]=='Mkt1010415') {
          if(typeof HR !== "undefined" && HR !== null && (!HR.PREFETCH_DATA.profile || !HR.PREFETCH_DATA.profile.created_at)){
            document.cookie = "fb_ad_campaign_source="+sParameterName[1]+";path=/";
          }
        }
      }
    })();

    if(typeof HR !== "undefined" && HR !== null && HR.PREFETCH_DATA && HR.PREFETCH_DATA.profile &&  HR.PREFETCH_DATA.profile.created_at) {
      if($.cookie('fb_ad_campaign_source')) {
        window._fbq.push(['track', '6023409928156', {'value':'0.01','currency':'USD'}]);
        $.removeCookie('fb_ad_campaign_source', { path: '/' });
      }
    }
  });
</script>

<!-- Load Facebook SDK for JavaScript -->
<script>
;(function(){
  // Function to have a list of functions to load on fbAsyncInit
  var toLoad = []
  window.fbReady = function(func){
    if( typeof func === 'function') {
      if( window.FB ) {
        func.call(window)
      } else {
        toLoad.push(func)
      }
    }
  }

  window.fbAsyncInit = function() {
    FB.init({
      appId      : '347499128655783',
      xfbml      : true,
      version    : 'v2.5',
      caption    : 'HackerRank.com',
    });

    // Execute all the fbAsyncInit functions
    toLoad.forEach(function(func){
      func.call(window)
    })
  };
})();
$(window).on("load", function() {
  setTimeout(function() {
    (function(d, s, id){
       var js, fjs = d.getElementsByTagName(s)[0];
       if (d.getElementById(id)) {return;}
       js = d.createElement(s); js.id = id;
       js.src = "//connect.facebook.net/en_US/sdk.js";
       fjs.parentNode.insertBefore(js, fjs);
    }(document, 'script', 'facebook-jssdk'));
  }, 0);
});
</script>
<!-- Load Twitter SDK for JavaScript -->
<script>
window.twttr = (function() {
  t = window.twttr || {};
  if (typeof t.ready === 'undefined') {
    t._e = [];
    t.ready = function(f) {
      t._e.push(f);
    };
  }
  return t;
})();
$(window).on("load", function() {
  setTimeout(function() {
    (function(d, s, id){
       var js, fjs = d.getElementsByTagName(s)[0];
       if (d.getElementById(id)) {return;}
       js = d.createElement(s); js.id = id;
       js.src = "https://platform.twitter.com/widgets.js";
       fjs.parentNode.insertBefore(js, fjs);
    }(document, 'script', 'twitter-wjs'));
  }, 0);
});
</script>

<script type="text/javascript">
    if (typeof($) == "function") {
        $(document).ready(function() {
            function we_are_hiring() {
                lines = [
                    "===============================================================================",
                    ",--.  ,--.              ,--.                 ,------.                 ,--.     ",
                    "|  '--'  | ,--,--. ,---.|  |,-. ,---. ,--.--.|  .--. ' ,--,--.,--,--, |  |,-.  ",
                    "|  .--.  |' ,-.  || .--'|     /| .-. :|  .--'|  '--'.'' ,-.  ||      \\|     /  ",
                    "|  |  |  |\\ '-'  |\\ `--.|  \\  \\\\   --.|  |   |  |\\  \\ \\ '-'  ||  ||  ||  \\  \\  ",
                    "`--'  `--' `--`--' `---'`--'`--'`----'`--'   `--' '--' `--`--'`--''--'`--'`--' ",
                    "===============================================================================",
                    "  You opened the console! Know some code, do you? Want to work for one of the  ",
                    "  best startups around? https://www.hackerrank.com/careers                     ",
                    "==============================================================================="
                ]
                for (i = 0; i < lines.length; i ++) {
                    console.log(lines[i]);
                }
            }
            setTimeout(we_are_hiring, 5000);
            if(window.trackJs) {
              trackJs.track("Page Loaded");
            }
        });
    }
</script>

<!-- Some Black Magic for Internet Explorer -->

<!--[if lt IE 10]>
<script src="https://d3keuzeb2crhkn.cloudfront.net/hackerrank/assets/jquery-plugins/jQuery.XDomainRequest-f3959fb3de0a56f2fa9d42f3719e88d8.js"></script>
<![endif]-->

<!--[if lt IE 9]>
<script src="https://cdnjs.cloudflare.com/ajax/libs/html5shiv/3.6/html5shiv.min.js" type="text/javascript"></script>
<![endif]-->

<!-- Chrome Frame for IE6 -->
<!--[if lt IE 7 ]>
 <script src="https://ajax.googleapis.com/ajax/libs/chrome-frame/1.0.2/CFInstall.min.js"></script><script>window.attachEvent("onload",function(){CFInstall.check({mode:"overlay"})})</script>
<![endif]-->

<!--[if lte IE 9]>
<script>
    IE_BROWSER = true
</script>
<![endif]-->

<!-- Track button clicks -->
<script type="text/javascript">
    $(document).on('click', 'a, button, input', null, function(e) {
        src = $(e.currentTarget);
        if (src.attr('data-analytics')) {
            action = 'Click'; data = src.attr('data-analytics');
        } else {
            return;
        }

            hr_metrics.track(action, data, (function() {
                var params={};
                for (var _i=1; _i<=11; ++_i){
                    var _attr = 'data-attr'+_i;
                    if (src.attr(_attr)){
                        params['attribute'+_i] = src.attr(_attr);
                }}
                return params;
            })());
        // google analytics
        _gaq.push(['_trackEvent', 'Events' , action, data])
    });

    $(document).on('AnalyticsEvent', function(e) {
        action = e.event_type || false
        data = e.event_name || false

        if (!action || !data)
          return

        params = {}
        params['attribute1'] = e.event_value || ""

        if (window.HR && window.HR.current_page)
          params['attribute2'] = window.HR.current_page

        if (window.HR && window.HR.current_contest)
          params['attribute3'] = window.HR.current_contest.get('name')

            hr_metrics.track(action, data, params);
        // google analytics
        _gaq.push(['_trackEvent', 'Events' , action, data])
    });
</script>

    <script type="text/javascript">   _bizo_data_partner_id = "6802"; </script>
    <script type="text/javascript">
        $(window).on("load", function() {
          (function() {   var s = document.getElementsByTagName("script")[0];   var b = document.createElement("script");   b.type = "text/javascript";   b.async = true;   b.src = (window.location.protocol === "https:" ? "https://sjs" : "http://js") + ".bizographics.com/insight.min.js";   s.parentNode.insertBefore(b, s); })();
        });
    </script> <noscript>   &lt;img height="1" width="1" alt="" style="display:none;" src="//www.bizographics.com/collect/?pid=6802&amp;fmt=gif" /&gt; </noscript>



<div class="offline-ui offline-ui-up"><div class="offline-ui-content"></div><a href="https://www.hackerrank.com/" class="offline-ui-retry"></a></div><div id="fb-root" class=" fb_reset"><div style="position: absolute; top: -10000px; height: 0px; width: 0px;"><div></div></div><div style="position: absolute; top: -10000px; height: 0px; width: 0px;"><div><iframe name="fb_xdm_frame_https" frameborder="0" allowtransparency="true" allowfullscreen="true" scrolling="no" id="fb_xdm_frame_https" aria-hidden="true" title="Facebook Cross Domain Communication Frame" tabindex="-1" src="./New Year Chaos _files/xd_arbiter.html" style="border: none;"></iframe></div></div></div><img src="./New Year Chaos _files/ipv" style="display: none;"><iframe id="rufous-sandbox" scrolling="no" frameborder="0" allowtransparency="true" allowfullscreen="true" style="position: absolute; visibility: hidden; display: none; width: 0px; height: 0px; padding: 0px; border: none;" src="./New Year Chaos _files/saved_resource.html"></iframe><iframe name="filepicker_comm_iframe" id="filepicker_comm_iframe" src="./New Year Chaos _files/saved_resource(1).html" style="display: none;"></iframe><iframe name="fpapi_comm_iframe" id="fpapi_comm_iframe" src="./New Year Chaos _files/saved_resource(2).html" style="display: none;"></iframe><script src="./New Year Chaos _files/saved_resource" type="text/javascript"></script><img src="./New Year Chaos _files/l" width="1" height="1" border="0" alt="" style="display: none;"><img src="./New Year Chaos _files/ipv(1)" style="display: none;"><img src="./New Year Chaos _files/ipv(2)" style="display: none;"><img src="./New Year Chaos _files/ipv(3)" style="display: none;"><span role="status" aria-live="assertive" aria-relevant="additions" class="ui-helper-hidden-accessible"></span><ul class="vakata-context"></ul><div id="jstree-marker" style="display: none;">&nbsp;</div></body></html>