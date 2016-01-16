



<!DOCTYPE html>
<html lang="en" class="">
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# object: http://ogp.me/ns/object# article: http://ogp.me/ns/article# profile: http://ogp.me/ns/profile#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta http-equiv="Content-Language" content="en">
    <meta name="viewport" content="width=1020">
    
    
    <title>paparazzi/baro_board.c at sdlog · igua/paparazzi</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub">
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png">
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png">
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png">
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png">
    <meta property="fb:app_id" content="1401488693436528">

      <meta content="@github" name="twitter:site" /><meta content="summary" name="twitter:card" /><meta content="igua/paparazzi" name="twitter:title" /><meta content="paparazzi - Paparazzi is a free and open-source hardware and software project for unmanned (air) vehicles. This is the main software repository." name="twitter:description" /><meta content="https://avatars2.githubusercontent.com/u/16390202?v=3&amp;s=400" name="twitter:image:src" />
      <meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="https://avatars2.githubusercontent.com/u/16390202?v=3&amp;s=400" property="og:image" /><meta content="igua/paparazzi" property="og:title" /><meta content="https://github.com/igua/paparazzi" property="og:url" /><meta content="paparazzi - Paparazzi is a free and open-source hardware and software project for unmanned (air) vehicles. This is the main software repository." property="og:description" />
      <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">
    <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">
    <link rel="assets" href="https://assets-cdn.github.com/">
    <link rel="web-socket" href="wss://live.github.com/_sockets/MzcwMzExODphMGQ1ZDhjM2NlZDRiNWExODNkODU3MWZlNThmYTlhOTpkNTY3NzdjODA1YmIyZmI1M2Y5YTg0MzZhOTIxNDQ5YjJlNzU0NGU5ZWQ5NzNmNDJhYmI2MjgwYTFlNjUzYjBh--cb0b827e22ad614daf4d63d339e0d5e6285c71de">
    <meta name="pjax-timeout" content="1000">
    <link rel="sudo-modal" href="/sessions/sudo_modal">

    <meta name="msapplication-TileImage" content="/windows-tile.png">
    <meta name="msapplication-TileColor" content="#ffffff">
    <meta name="selected-link" value="repo_source" data-pjax-transient>

    <meta name="google-site-verification" content="KT5gs8h0wvaagLKAVWq8bbeNwnZZK1r1XQysX3xurLU">
    <meta name="google-analytics" content="UA-3769691-2">

<meta content="collector.githubapp.com" name="octolytics-host" /><meta content="github" name="octolytics-app-id" /><meta content="4FEFFC2D:1377:2C60480:5699F9B9" name="octolytics-dimension-request_id" /><meta content="3703118" name="octolytics-actor-id" /><meta content="philipan" name="octolytics-actor-login" /><meta content="411ae700e48f0f6a26e31797b69cd6beceeda528fdacd8e877a31cc93febef73" name="octolytics-actor-hash" />
<meta content="/&lt;user-name&gt;/&lt;repo-name&gt;/blob/show" data-pjax-transient="true" name="analytics-location" />
<meta content="Rails, view, blob#show" data-pjax-transient="true" name="analytics-event" />


  <meta class="js-ga-set" name="dimension1" content="Logged In">



        <meta name="hostname" content="github.com">
    <meta name="user-login" content="philipan">

        <meta name="expected-hostname" content="github.com">

      <link rel="mask-icon" href="https://assets-cdn.github.com/pinned-octocat.svg" color="#4078c0">
      <link rel="icon" type="image/x-icon" href="https://assets-cdn.github.com/favicon.ico">

    <meta content="7fbb85f3aea6c81a1f60907111c2b539c37819cc" name="form-nonce" />

    <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/github-e9bcbd2b27a6b792794dfc31fff5f4f8e7245c761ddb1a44cb19b6a6cc5e4ff7.css" media="all" rel="stylesheet" />
    <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/github2-70af51f1bed4904749e6ef486ad11871c8ce4361ac82bb5f96a090b7f5346580.css" media="all" rel="stylesheet" />
    
    


    <meta http-equiv="x-pjax-version" content="33df7816266be22aad9db35bc85c5c41">

      
  <meta name="description" content="paparazzi - Paparazzi is a free and open-source hardware and software project for unmanned (air) vehicles. This is the main software repository.">
  <meta name="go-import" content="github.com/igua/paparazzi git https://github.com/igua/paparazzi.git">

  <meta content="16390202" name="octolytics-dimension-user_id" /><meta content="igua" name="octolytics-dimension-user_login" /><meta content="48392068" name="octolytics-dimension-repository_id" /><meta content="igua/paparazzi" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="true" name="octolytics-dimension-repository_is_fork" /><meta content="1068018" name="octolytics-dimension-repository_parent_id" /><meta content="paparazzi/paparazzi" name="octolytics-dimension-repository_parent_nwo" /><meta content="1068018" name="octolytics-dimension-repository_network_root_id" /><meta content="paparazzi/paparazzi" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/igua/paparazzi/commits/sdlog.atom" rel="alternate" title="Recent Commits to paparazzi:sdlog" type="application/atom+xml">

  </head>


  <body class="logged_in   env-production linux vis-public fork page-blob">
    <a href="#start-of-content" tabindex="1" class="accessibility-aid js-skip-to-content">Skip to content</a>

    
    
    



      <div class="header header-logged-in true" role="banner">
  <div class="container clearfix">

    <a class="header-logo-invertocat" href="https://github.com/" data-hotkey="g d" aria-label="Homepage" data-ga-click="Header, go to dashboard, icon:logo">
  <span aria-hidden="true" class="mega-octicon octicon-mark-github"></span>
</a>


      <div class="site-search repo-scope js-site-search" role="search">
          <!-- </textarea> --><!-- '"` --><form accept-charset="UTF-8" action="/igua/paparazzi/search" class="js-site-search-form" data-global-search-url="/search" data-repo-search-url="/igua/paparazzi/search" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
  <label class="js-chromeless-input-container form-control">
    <div class="scope-badge">This repository</div>
    <input type="text"
      class="js-site-search-focus js-site-search-field is-clearable chromeless-input"
      data-hotkey="s"
      name="q"
      placeholder="Search"
      aria-label="Search this repository"
      data-global-scope-placeholder="Search GitHub"
      data-repo-scope-placeholder="Search"
      tabindex="1"
      autocapitalize="off">
  </label>
</form>
      </div>

      <ul class="header-nav left" role="navigation">
        <li class="header-nav-item">
          <a href="/pulls" class="js-selected-navigation-item header-nav-link" data-ga-click="Header, click, Nav menu - item:pulls context:user" data-hotkey="g p" data-selected-links="/pulls /pulls/assigned /pulls/mentioned /pulls">
            Pull requests
</a>        </li>
        <li class="header-nav-item">
          <a href="/issues" class="js-selected-navigation-item header-nav-link" data-ga-click="Header, click, Nav menu - item:issues context:user" data-hotkey="g i" data-selected-links="/issues /issues/assigned /issues/mentioned /issues">
            Issues
</a>        </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="https://gist.github.com/" data-ga-click="Header, go to gist, text:gist">Gist</a>
          </li>
      </ul>

    
<ul class="header-nav user-nav right" id="user-links">
  <li class="header-nav-item">
      <span class="js-socket-channel js-updatable-content"
        data-channel="notification-changed:philipan"
        data-url="/notifications/header">
      <a href="/notifications" aria-label="You have no unread notifications" class="header-nav-link notification-indicator tooltipped tooltipped-s" data-ga-click="Header, go to notifications, icon:read" data-hotkey="g n">
          <span class="mail-status all-read"></span>
          <span aria-hidden="true" class="octicon octicon-bell"></span>
</a>  </span>

  </li>

  <li class="header-nav-item dropdown js-menu-container">
    <a class="header-nav-link tooltipped tooltipped-s js-menu-target" href="/new"
       aria-label="Create new…"
       data-ga-click="Header, create new, icon:add">
      <span aria-hidden="true" class="octicon octicon-plus left"></span>
      <span class="dropdown-caret"></span>
    </a>

    <div class="dropdown-menu-content js-menu-content">
      <ul class="dropdown-menu dropdown-menu-sw">
        
<a class="dropdown-item" href="/new" data-ga-click="Header, create new repository">
  New repository
</a>


  <a class="dropdown-item" href="/organizations/new" data-ga-click="Header, create new organization">
    New organization
  </a>




      </ul>
    </div>
  </li>

  <li class="header-nav-item dropdown js-menu-container">
    <a class="header-nav-link name tooltipped tooltipped-sw js-menu-target" href="/philipan"
       aria-label="View profile and more"
       data-ga-click="Header, show menu, icon:avatar">
      <img alt="@philipan" class="avatar" height="20" src="https://avatars2.githubusercontent.com/u/3703118?v=3&amp;s=40" width="20" />
      <span class="dropdown-caret"></span>
    </a>

    <div class="dropdown-menu-content js-menu-content">
      <div class="dropdown-menu  dropdown-menu-sw">
        <div class=" dropdown-header header-nav-current-user css-truncate">
            Signed in as <strong class="css-truncate-target">philipan</strong>

        </div>


        <div class="dropdown-divider"></div>

          <a class="dropdown-item" href="/philipan" data-ga-click="Header, go to profile, text:your profile">
            Your profile
          </a>
        <a class="dropdown-item" href="/stars" data-ga-click="Header, go to starred repos, text:your stars">
          Your stars
        </a>
        <a class="dropdown-item" href="/explore" data-ga-click="Header, go to explore, text:explore">
          Explore
        </a>
          <a class="dropdown-item" href="/integrations" data-ga-click="Header, go to integrations, text:integrations">
            Integrations
          </a>
        <a class="dropdown-item" href="https://help.github.com" data-ga-click="Header, go to help, text:help">
          Help
        </a>

          <div class="dropdown-divider"></div>

          <a class="dropdown-item" href="/settings/profile" data-ga-click="Header, go to settings, icon:settings">
            Settings
          </a>

          <!-- </textarea> --><!-- '"` --><form accept-charset="UTF-8" action="/logout" class="logout-form" data-form-nonce="7fbb85f3aea6c81a1f60907111c2b539c37819cc" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="HgMchf2TgxcMjCno3nxhLW2B17JtWhz4/DWendPf5BA/CigZx1KHuwjNuUR/zxGrKy6bf/27vAL1LKu93IBnMA==" /></div>
            <button class="dropdown-item dropdown-signout" data-ga-click="Header, sign out, icon:logout">
              Sign out
            </button>
</form>
      </div>
    </div>
  </li>
</ul>


    
  </div>
</div>

      

      


    <div id="start-of-content" class="accessibility-aid"></div>

      <div id="js-flash-container">
</div>


    <div role="main" class="main-content">
        <div itemscope itemtype="http://schema.org/WebPage">
    <div id="js-repo-pjax-container" class="context-loader-container js-repo-nav-next" data-pjax-container>
      
<div class="pagehead repohead instapaper_ignore readability-menu experiment-repo-nav">
  <div class="container repohead-details-container">

    

<ul class="pagehead-actions">

  <li>
        <!-- </textarea> --><!-- '"` --><form accept-charset="UTF-8" action="/notifications/subscribe" class="js-social-container" data-autosubmit="true" data-form-nonce="7fbb85f3aea6c81a1f60907111c2b539c37819cc" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="1E+9FvgVKy/LW+RUyza5dns1+aKRxZPQput5pxmLsb3hRGBrfD+T0e6cwCekOVly39WiOgeJe9RllxnlG0LFEg==" /></div>      <input id="repository_id" name="repository_id" type="hidden" value="48392068" />

        <div class="select-menu js-menu-container js-select-menu">
          <a href="/igua/paparazzi/subscription"
            class="btn btn-sm btn-with-count select-menu-button js-menu-target" role="button" tabindex="0" aria-haspopup="true"
            data-ga-click="Repository, click Watch settings, action:blob#show">
            <span class="js-select-button">
              <span aria-hidden="true" class="octicon octicon-eye"></span>
              Unwatch
            </span>
          </a>
          <a class="social-count js-social-count" href="/igua/paparazzi/watchers">
            4
          </a>

        <div class="select-menu-modal-holder">
          <div class="select-menu-modal subscription-menu-modal js-menu-content" aria-hidden="true">
            <div class="select-menu-header">
              <span aria-label="Close" class="octicon octicon-x js-menu-close" role="button"></span>
              <span class="select-menu-title">Notifications</span>
            </div>

              <div class="select-menu-list js-navigation-container" role="menu">

                <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
                  <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
                  <div class="select-menu-item-text">
                    <input id="do_included" name="do" type="radio" value="included" />
                    <span class="select-menu-item-heading">Not watching</span>
                    <span class="description">Be notified when participating or @mentioned.</span>
                    <span class="js-select-button-text hidden-select-button-text">
                      <span aria-hidden="true" class="octicon octicon-eye"></span>
                      Watch
                    </span>
                  </div>
                </div>

                <div class="select-menu-item js-navigation-item selected" role="menuitem" tabindex="0">
                  <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
                  <div class="select-menu-item-text">
                    <input checked="checked" id="do_subscribed" name="do" type="radio" value="subscribed" />
                    <span class="select-menu-item-heading">Watching</span>
                    <span class="description">Be notified of all conversations.</span>
                    <span class="js-select-button-text hidden-select-button-text">
                      <span aria-hidden="true" class="octicon octicon-eye"></span>
                      Unwatch
                    </span>
                  </div>
                </div>

                <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
                  <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
                  <div class="select-menu-item-text">
                    <input id="do_ignore" name="do" type="radio" value="ignore" />
                    <span class="select-menu-item-heading">Ignoring</span>
                    <span class="description">Never be notified.</span>
                    <span class="js-select-button-text hidden-select-button-text">
                      <span aria-hidden="true" class="octicon octicon-mute"></span>
                      Stop ignoring
                    </span>
                  </div>
                </div>

              </div>

            </div>
          </div>
        </div>
</form>
  </li>

  <li>
    
  <div class="js-toggler-container js-social-container starring-container ">

    <!-- </textarea> --><!-- '"` --><form accept-charset="UTF-8" action="/igua/paparazzi/unstar" class="js-toggler-form starred js-unstar-button" data-form-nonce="7fbb85f3aea6c81a1f60907111c2b539c37819cc" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="GxpLCTkl7dvtDinQS1APiNg5Q5J9Am4iOU93F/BL8zQNzoE2Xx+st0sgPLUvZnb4w2TO9YnDIdTd72tbSfeVMA==" /></div>
      <button
        class="btn btn-sm btn-with-count js-toggler-target"
        aria-label="Unstar this repository" title="Unstar igua/paparazzi"
        data-ga-click="Repository, click unstar button, action:blob#show; text:Unstar">
        <span aria-hidden="true" class="octicon octicon-star"></span>
        Unstar
      </button>
        <a class="social-count js-social-count" href="/igua/paparazzi/stargazers">
          0
        </a>
</form>
    <!-- </textarea> --><!-- '"` --><form accept-charset="UTF-8" action="/igua/paparazzi/star" class="js-toggler-form unstarred js-star-button" data-form-nonce="7fbb85f3aea6c81a1f60907111c2b539c37819cc" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="evkxrhKfrtz2JP5I4n4IlhJ0JuLnX5FW6n2LgJPfNOAR6+n+Qb8jbEF0ADMnaia+XbyOSW7sA8GpLjA4od2BnA==" /></div>
      <button
        class="btn btn-sm btn-with-count js-toggler-target"
        aria-label="Star this repository" title="Star igua/paparazzi"
        data-ga-click="Repository, click star button, action:blob#show; text:Star">
        <span aria-hidden="true" class="octicon octicon-star"></span>
        Star
      </button>
        <a class="social-count js-social-count" href="/igua/paparazzi/stargazers">
          0
        </a>
</form>  </div>

  </li>

  <li>
          <a href="#fork-destination-box" class="btn btn-sm btn-with-count"
              title="Fork your own copy of igua/paparazzi to your account"
              aria-label="Fork your own copy of igua/paparazzi to your account"
              rel="facebox"
              data-ga-click="Repository, show fork modal, action:blob#show; text:Fork">
              <span aria-hidden="true" class="octicon octicon-repo-forked"></span>
            Fork
          </a>

          <div id="fork-destination-box" style="display: none;">
            <h2 class="facebox-header" data-facebox-id="facebox-header">Where should we fork this repository?</h2>
            <include-fragment src=""
                class="js-fork-select-fragment fork-select-fragment"
                data-url="/igua/paparazzi/fork?fragment=1">
              <img alt="Loading" height="64" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-128.gif" width="64" />
            </include-fragment>
          </div>

    <a href="/igua/paparazzi/network" class="social-count">
      527
    </a>
  </li>
</ul>

    <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public ">
  <span aria-hidden="true" class="octicon octicon-repo-forked"></span>
  <span class="author"><a href="/igua" class="url fn" itemprop="url" rel="author"><span itemprop="title">igua</span></a></span><!--
--><span class="path-divider">/</span><!--
--><strong><a href="/igua/paparazzi" data-pjax="#js-repo-pjax-container">paparazzi</a></strong>

  <span class="page-context-loader">
    <img alt="" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
  </span>

    <span class="fork-flag">
      <span class="text">forked from <a href="/paparazzi/paparazzi">paparazzi/paparazzi</a></span>
    </span>
</h1>

  </div>
  <div class="container">
    
<nav class="reponav js-repo-nav js-sidenav-container-pjax js-octicon-loaders"
     role="navigation"
     data-pjax="#js-repo-pjax-container">

  <a href="/igua/paparazzi/tree/sdlog" aria-label="Code" aria-selected="true" class="js-selected-navigation-item selected reponav-item" data-hotkey="g c" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches /igua/paparazzi/tree/sdlog">
    <span aria-hidden="true" class="octicon octicon-code"></span>
    Code
</a>

  <a href="/igua/paparazzi/pulls" class="js-selected-navigation-item reponav-item" data-hotkey="g p" data-selected-links="repo_pulls /igua/paparazzi/pulls">
    <span aria-hidden="true" class="octicon octicon-git-pull-request"></span>
    Pull requests
    <span class="counter">0</span>
</a>

  <a href="/igua/paparazzi/pulse" class="js-selected-navigation-item reponav-item" data-selected-links="pulse /igua/paparazzi/pulse">
    <span aria-hidden="true" class="octicon octicon-pulse"></span>
    Pulse
</a>
  <a href="/igua/paparazzi/graphs" class="js-selected-navigation-item reponav-item" data-selected-links="repo_graphs repo_contributors /igua/paparazzi/graphs">
    <span aria-hidden="true" class="octicon octicon-graph"></span>
    Graphs
</a>

</nav>

  </div>
</div>

<div class="container new-discussion-timeline experiment-repo-nav">
  <div class="repository-content">

    

<a href="/igua/paparazzi/blob/d6029cfc4c004137a560713aa45a7f5d3499c71e/sw/airborne/boards/apogee/baro_board.c" class="hidden js-permalink-shortcut" data-hotkey="y">Permalink</a>

<!-- blob contrib key: blob_contributors:v21:9fbdb30147a7d5fe7bbb972986ce2a6d -->

<div class="file-navigation js-zeroclipboard-container">
  
<div class="select-menu js-menu-container js-select-menu left">
  <button class="btn btn-sm select-menu-button js-menu-target css-truncate" data-hotkey="w"
    title="sdlog"
    type="button" aria-label="Switch branches or tags" tabindex="0" aria-haspopup="true">
    <i>Branch:</i>
    <span class="js-select-button css-truncate-target">sdlog</span>
  </button>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax aria-hidden="true">

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <span aria-label="Close" class="octicon octicon-x js-menu-close" role="button"></span>
        <span class="select-menu-title">Switch branches/tags</span>
      </div>

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Find or create a branch…" id="context-commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Find or create a branch…">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" data-filter-placeholder="Find or create a branch…" class="js-select-menu-tab" role="tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" data-filter-placeholder="Find a tag…" class="js-select-menu-tab" role="tab">Tags</a>
            </li>
          </ul>
        </div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches" role="menu">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/igua/paparazzi/blob/abi_event/sw/airborne/boards/apogee/baro_board.c"
               data-name="abi_event"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="abi_event">
                abi_event
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/igua/paparazzi/blob/all_ahrs_aligned_check/sw/airborne/boards/apogee/baro_board.c"
               data-name="all_ahrs_aligned_check"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="all_ahrs_aligned_check">
                all_ahrs_aligned_check
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/igua/paparazzi/blob/apogee_mpu9150_baro_sdlog/sw/airborne/boards/apogee/baro_board.c"
               data-name="apogee_mpu9150_baro_sdlog"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="apogee_mpu9150_baro_sdlog">
                apogee_mpu9150_baro_sdlog
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/igua/paparazzi/blob/baro_board_module/sw/airborne/boards/apogee/baro_board.c"
               data-name="baro_board_module"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="baro_board_module">
                baro_board_module
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/igua/paparazzi/blob/campaign2011/sw/airborne/boards/apogee/baro_board.c"
               data-name="campaign2011"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="campaign2011">
                campaign2011
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/igua/paparazzi/blob/campaign2013/sw/airborne/boards/apogee/baro_board.c"
               data-name="campaign2013"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="campaign2013">
                campaign2013
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/igua/paparazzi/blob/coverity_scan/sw/airborne/boards/apogee/baro_board.c"
               data-name="coverity_scan"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="coverity_scan">
                coverity_scan
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/igua/paparazzi/blob/feature4_fixedwing_in_rotor/sw/airborne/boards/apogee/baro_board.c"
               data-name="feature4_fixedwing_in_rotor"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="feature4_fixedwing_in_rotor">
                feature4_fixedwing_in_rotor
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/igua/paparazzi/blob/master/sw/airborne/boards/apogee/baro_board.c"
               data-name="master"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="master">
                master
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/igua/paparazzi/blob/messages/sw/airborne/boards/apogee/baro_board.c"
               data-name="messages"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="messages">
                messages
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/igua/paparazzi/blob/ocamlbuild/sw/airborne/boards/apogee/baro_board.c"
               data-name="ocamlbuild"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="ocamlbuild">
                ocamlbuild
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/igua/paparazzi/blob/rt_chibios/sw/airborne/boards/apogee/baro_board.c"
               data-name="rt_chibios"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="rt_chibios">
                rt_chibios
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/igua/paparazzi/blob/rt_paparazzi/sw/airborne/boards/apogee/baro_board.c"
               data-name="rt_paparazzi"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="rt_paparazzi">
                rt_paparazzi
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open selected"
               href="/igua/paparazzi/blob/sdlog/sw/airborne/boards/apogee/baro_board.c"
               data-name="sdlog"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="sdlog">
                sdlog
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/igua/paparazzi/blob/stm32f3_discovery/sw/airborne/boards/apogee/baro_board.c"
               data-name="stm32f3_discovery"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="stm32f3_discovery">
                stm32f3_discovery
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/igua/paparazzi/blob/stm32f4_can/sw/airborne/boards/apogee/baro_board.c"
               data-name="stm32f4_can"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="stm32f4_can">
                stm32f4_can
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/igua/paparazzi/blob/transitioning_vehicles/sw/airborne/boards/apogee/baro_board.c"
               data-name="transitioning_vehicles"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="transitioning_vehicles">
                transitioning_vehicles
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/igua/paparazzi/blob/v4.0/sw/airborne/boards/apogee/baro_board.c"
               data-name="v4.0"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v4.0">
                v4.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/igua/paparazzi/blob/v4.2/sw/airborne/boards/apogee/baro_board.c"
               data-name="v4.2"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v4.2">
                v4.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/igua/paparazzi/blob/v5.0/sw/airborne/boards/apogee/baro_board.c"
               data-name="v5.0"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.0">
                v5.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/igua/paparazzi/blob/v5.2/sw/airborne/boards/apogee/baro_board.c"
               data-name="v5.2"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.2">
                v5.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/igua/paparazzi/blob/v5.4/sw/airborne/boards/apogee/baro_board.c"
               data-name="v5.4"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.4">
                v5.4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/igua/paparazzi/blob/v5.6/sw/airborne/boards/apogee/baro_board.c"
               data-name="v5.6"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.6">
                v5.6
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/igua/paparazzi/blob/v5.8/sw/airborne/boards/apogee/baro_board.c"
               data-name="v5.8"
               data-skip-pjax="true"
               rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.8">
                v5.8
              </span>
            </a>
        </div>

          <!-- </textarea> --><!-- '"` --><form accept-charset="UTF-8" action="/igua/paparazzi/branches" class="js-create-branch select-menu-item select-menu-new-item-form js-navigation-item js-new-item-form" data-form-nonce="7fbb85f3aea6c81a1f60907111c2b539c37819cc" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="aPivaMwhnMynbZWrZp7T9d60fVFtwkYIoSEu+ZDmZYNs/J61u9YzkFSDp/S0iY0XYLGb4HjtwlNlBaJJX3UT+Q==" /></div>
          <span aria-hidden="true" class="octicon octicon-git-branch select-menu-item-icon"></span>
            <div class="select-menu-item-text">
              <span class="select-menu-item-heading">Create branch: <span class="js-new-item-name"></span></span>
              <span class="description">from ‘sdlog’</span>
            </div>
            <input type="hidden" name="name" id="name" class="js-new-item-value">
            <input type="hidden" name="branch" id="branch" value="sdlog">
            <input type="hidden" name="path" id="path" value="sw/airborne/boards/apogee/baro_board.c">
</form>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.8.0_stable/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.8.0_stable"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.8.0_stable">
                v5.8.0_stable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.7.1_testing/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.7.1_testing"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.7.1_testing">
                v5.7.1_testing
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.7.0_testing/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.7.0_testing"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.7.0_testing">
                v5.7.0_testing
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.7_devel/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.7_devel"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.7_devel">
                v5.7_devel
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.6.0_stable/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.6.0_stable"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.6.0_stable">
                v5.6.0_stable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.5.2_testing/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.5.2_testing"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.5.2_testing">
                v5.5.2_testing
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.5.1_testing/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.5.1_testing"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.5.1_testing">
                v5.5.1_testing
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.5.0_testing/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.5.0_testing"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.5.0_testing">
                v5.5.0_testing
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.5_devel/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.5_devel"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.5_devel">
                v5.5_devel
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.4.2_stable/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.4.2_stable"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.4.2_stable">
                v5.4.2_stable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.4.1_stable/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.4.1_stable"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.4.1_stable">
                v5.4.1_stable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.4.0_stable/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.4.0_stable"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.4.0_stable">
                v5.4.0_stable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.3.3_testing/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.3.3_testing"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.3.3_testing">
                v5.3.3_testing
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.3.2_testing/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.3.2_testing"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.3.2_testing">
                v5.3.2_testing
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.3.1_testing/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.3.1_testing"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.3.1_testing">
                v5.3.1_testing
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.3.0_testing/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.3.0_testing"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.3.0_testing">
                v5.3.0_testing
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.3_devel/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.3_devel"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.3_devel">
                v5.3_devel
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.2.2_stable/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.2.2_stable"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.2.2_stable">
                v5.2.2_stable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.2.1_stable/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.2.1_stable"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.2.1_stable">
                v5.2.1_stable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.2.0_stable/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.2.0_stable"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.2.0_stable">
                v5.2.0_stable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.1.1_testing/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.1.1_testing"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.1.1_testing">
                v5.1.1_testing
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.1.0_testing/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.1.0_testing"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.1.0_testing">
                v5.1.0_testing
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.1_devel/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.1_devel"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.1_devel">
                v5.1_devel
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.0.5_stable/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.0.5_stable"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.0.5_stable">
                v5.0.5_stable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.0.4_stable/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.0.4_stable"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.0.4_stable">
                v5.0.4_stable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.0.3_stable/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.0.3_stable"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.0.3_stable">
                v5.0.3_stable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.0.2_stable/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.0.2_stable"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.0.2_stable">
                v5.0.2_stable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.0.1_stable/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.0.1_stable"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.0.1_stable">
                v5.0.1_stable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v5.0.0_stable/sw/airborne/boards/apogee/baro_board.c"
              data-name="v5.0.0_stable"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5.0.0_stable">
                v5.0.0_stable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v4.9_devel/sw/airborne/boards/apogee/baro_board.c"
              data-name="v4.9_devel"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v4.9_devel">
                v4.9_devel
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v4.2.2_stable/sw/airborne/boards/apogee/baro_board.c"
              data-name="v4.2.2_stable"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v4.2.2_stable">
                v4.2.2_stable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v4.2.1_stable/sw/airborne/boards/apogee/baro_board.c"
              data-name="v4.2.1_stable"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v4.2.1_stable">
                v4.2.1_stable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v4.2.0_stable/sw/airborne/boards/apogee/baro_board.c"
              data-name="v4.2.0_stable"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v4.2.0_stable">
                v4.2.0_stable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v4.1.1_testing/sw/airborne/boards/apogee/baro_board.c"
              data-name="v4.1.1_testing"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v4.1.1_testing">
                v4.1.1_testing
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v4.1.0_testing/sw/airborne/boards/apogee/baro_board.c"
              data-name="v4.1.0_testing"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v4.1.0_testing">
                v4.1.0_testing
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v4.1_unstable/sw/airborne/boards/apogee/baro_board.c"
              data-name="v4.1_unstable"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v4.1_unstable">
                v4.1_unstable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v4.0.4_stable/sw/airborne/boards/apogee/baro_board.c"
              data-name="v4.0.4_stable"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v4.0.4_stable">
                v4.0.4_stable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v4.0.3_stable/sw/airborne/boards/apogee/baro_board.c"
              data-name="v4.0.3_stable"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v4.0.3_stable">
                v4.0.3_stable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v4.0.2_stable/sw/airborne/boards/apogee/baro_board.c"
              data-name="v4.0.2_stable"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v4.0.2_stable">
                v4.0.2_stable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v4.0.1_stable/sw/airborne/boards/apogee/baro_board.c"
              data-name="v4.0.1_stable"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v4.0.1_stable">
                v4.0.1_stable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v4.0_stable/sw/airborne/boards/apogee/baro_board.c"
              data-name="v4.0_stable"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v4.0_stable">
                v4.0_stable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v3.9.2_testing/sw/airborne/boards/apogee/baro_board.c"
              data-name="v3.9.2_testing"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v3.9.2_testing">
                v3.9.2_testing
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v3.9.1_testing/sw/airborne/boards/apogee/baro_board.c"
              data-name="v3.9.1_testing"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v3.9.1_testing">
                v3.9.1_testing
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/v3.9.0_testing/sw/airborne/boards/apogee/baro_board.c"
              data-name="v3.9.0_testing"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="v3.9.0_testing">
                v3.9.0_testing
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/igua/paparazzi/tree/old_master/sw/airborne/boards/apogee/baro_board.c"
              data-name="old_master"
              data-skip-pjax="true"
              rel="nofollow">
              <span aria-hidden="true" class="octicon octicon-check select-menu-item-icon"></span>
              <span class="select-menu-item-text css-truncate-target" title="old_master">
                old_master
              </span>
            </a>
        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div>

    </div>
  </div>
</div>

  <div class="btn-group right">
    <a href="/igua/paparazzi/find/sdlog"
          class="js-show-file-finder btn btn-sm"
          data-pjax
          data-hotkey="t">
      Find file
    </a>
    <button aria-label="Copy file path to clipboard" class="js-zeroclipboard btn btn-sm zeroclipboard-button tooltipped tooltipped-s" data-copied-hint="Copied!" type="button">Copy path</button>
  </div>
  <div class="breadcrumb js-zeroclipboard-target">
    <span class="repo-root js-repo-root"><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/igua/paparazzi/tree/sdlog" class="" data-branch="sdlog" data-pjax="true" itemscope="url"><span itemprop="title">paparazzi</span></a></span></span><span class="separator">/</span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/igua/paparazzi/tree/sdlog/sw" class="" data-branch="sdlog" data-pjax="true" itemscope="url"><span itemprop="title">sw</span></a></span><span class="separator">/</span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/igua/paparazzi/tree/sdlog/sw/airborne" class="" data-branch="sdlog" data-pjax="true" itemscope="url"><span itemprop="title">airborne</span></a></span><span class="separator">/</span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/igua/paparazzi/tree/sdlog/sw/airborne/boards" class="" data-branch="sdlog" data-pjax="true" itemscope="url"><span itemprop="title">boards</span></a></span><span class="separator">/</span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/igua/paparazzi/tree/sdlog/sw/airborne/boards/apogee" class="" data-branch="sdlog" data-pjax="true" itemscope="url"><span itemprop="title">apogee</span></a></span><span class="separator">/</span><strong class="final-path">baro_board.c</strong>
  </div>
</div>

<include-fragment class="commit-tease" src="/igua/paparazzi/contributors/sdlog/sw/airborne/boards/apogee/baro_board.c">
  <div>
    Fetching contributors&hellip;
  </div>

  <div class="commit-tease-contributors">
    <img alt="" class="loader-loading left" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32-EAF2F5.gif" width="16" />
    <span class="loader-error">Cannot retrieve contributors at this time</span>
  </div>
</include-fragment>
<div class="file">
  <div class="file-header">
  <div class="file-actions">

    <div class="btn-group">
      <a href="/igua/paparazzi/raw/sdlog/sw/airborne/boards/apogee/baro_board.c" class="btn btn-sm " id="raw-url">Raw</a>
        <a href="/igua/paparazzi/blame/sdlog/sw/airborne/boards/apogee/baro_board.c" class="btn btn-sm js-update-url-with-hash">Blame</a>
      <a href="/igua/paparazzi/commits/sdlog/sw/airborne/boards/apogee/baro_board.c" class="btn btn-sm " rel="nofollow">History</a>
    </div>


        <!-- </textarea> --><!-- '"` --><form accept-charset="UTF-8" action="/igua/paparazzi/edit/sdlog/sw/airborne/boards/apogee/baro_board.c" class="inline-form js-update-url-with-hash" data-form-nonce="7fbb85f3aea6c81a1f60907111c2b539c37819cc" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="6jJFIc8V0MJi1TTDOi/SGuhzcQ3A2QnuarXt9+7mKAwLKh88IqsTon1VkDiu1U75yQiBtlwg60+ciXi/gYvKfQ==" /></div>
          <button class="btn-octicon tooltipped tooltipped-nw" type="submit"
            aria-label="Edit this file" data-hotkey="e" data-disable-with>
            <span aria-hidden="true" class="octicon octicon-pencil"></span>
          </button>
</form>        <!-- </textarea> --><!-- '"` --><form accept-charset="UTF-8" action="/igua/paparazzi/delete/sdlog/sw/airborne/boards/apogee/baro_board.c" class="inline-form" data-form-nonce="7fbb85f3aea6c81a1f60907111c2b539c37819cc" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="lDYZGK1tKuN5OI27GIVr+XBi/mHumPUhJp2c6BdGm0sd74pjxsMWHqTr4ZV4ETW4Q2nXHWaGwsZ62F3DpJCPuw==" /></div>
          <button class="btn-octicon btn-octicon-danger tooltipped tooltipped-nw" type="submit"
            aria-label="Delete this file" data-disable-with>
            <span aria-hidden="true" class="octicon octicon-trashcan"></span>
          </button>
</form>  </div>

  <div class="file-info">
      147 lines (125 sloc)
      <span class="file-info-divider"></span>
    3.74 KB
  </div>
</div>

  

  <div class="blob-wrapper data type-c">
      <table class="highlight tab-size js-file-line-container" data-tab-size="8">
      <tr>
        <td id="L1" class="blob-num js-line-number" data-line-number="1"></td>
        <td id="LC1" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2" class="blob-num js-line-number" data-line-number="2"></td>
        <td id="LC2" class="blob-code blob-code-inner js-file-line"><span class="pl-c">* Copyright (C) 2013 Gautier Hattenberger (ENAC)</span></td>
      </tr>
      <tr>
        <td id="L3" class="blob-num js-line-number" data-line-number="3"></td>
        <td id="LC3" class="blob-code blob-code-inner js-file-line"><span class="pl-c">*</span></td>
      </tr>
      <tr>
        <td id="L4" class="blob-num js-line-number" data-line-number="4"></td>
        <td id="LC4" class="blob-code blob-code-inner js-file-line"><span class="pl-c">* This file is part of paparazzi.</span></td>
      </tr>
      <tr>
        <td id="L5" class="blob-num js-line-number" data-line-number="5"></td>
        <td id="LC5" class="blob-code blob-code-inner js-file-line"><span class="pl-c">*</span></td>
      </tr>
      <tr>
        <td id="L6" class="blob-num js-line-number" data-line-number="6"></td>
        <td id="LC6" class="blob-code blob-code-inner js-file-line"><span class="pl-c">* paparazzi is free software; you can redistribute it and/or modify</span></td>
      </tr>
      <tr>
        <td id="L7" class="blob-num js-line-number" data-line-number="7"></td>
        <td id="LC7" class="blob-code blob-code-inner js-file-line"><span class="pl-c">* it under the terms of the GNU General Public License as published by</span></td>
      </tr>
      <tr>
        <td id="L8" class="blob-num js-line-number" data-line-number="8"></td>
        <td id="LC8" class="blob-code blob-code-inner js-file-line"><span class="pl-c">* the Free Software Foundation; either version 2, or (at your option)</span></td>
      </tr>
      <tr>
        <td id="L9" class="blob-num js-line-number" data-line-number="9"></td>
        <td id="LC9" class="blob-code blob-code-inner js-file-line"><span class="pl-c">* any later version.</span></td>
      </tr>
      <tr>
        <td id="L10" class="blob-num js-line-number" data-line-number="10"></td>
        <td id="LC10" class="blob-code blob-code-inner js-file-line"><span class="pl-c">*</span></td>
      </tr>
      <tr>
        <td id="L11" class="blob-num js-line-number" data-line-number="11"></td>
        <td id="LC11" class="blob-code blob-code-inner js-file-line"><span class="pl-c">* paparazzi is distributed in the hope that it will be useful,</span></td>
      </tr>
      <tr>
        <td id="L12" class="blob-num js-line-number" data-line-number="12"></td>
        <td id="LC12" class="blob-code blob-code-inner js-file-line"><span class="pl-c">* but WITHOUT ANY WARRANTY; without even the implied warranty of</span></td>
      </tr>
      <tr>
        <td id="L13" class="blob-num js-line-number" data-line-number="13"></td>
        <td id="LC13" class="blob-code blob-code-inner js-file-line"><span class="pl-c">* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the</span></td>
      </tr>
      <tr>
        <td id="L14" class="blob-num js-line-number" data-line-number="14"></td>
        <td id="LC14" class="blob-code blob-code-inner js-file-line"><span class="pl-c">* GNU General Public License for more details.</span></td>
      </tr>
      <tr>
        <td id="L15" class="blob-num js-line-number" data-line-number="15"></td>
        <td id="LC15" class="blob-code blob-code-inner js-file-line"><span class="pl-c">*</span></td>
      </tr>
      <tr>
        <td id="L16" class="blob-num js-line-number" data-line-number="16"></td>
        <td id="LC16" class="blob-code blob-code-inner js-file-line"><span class="pl-c">* You should have received a copy of the GNU General Public License</span></td>
      </tr>
      <tr>
        <td id="L17" class="blob-num js-line-number" data-line-number="17"></td>
        <td id="LC17" class="blob-code blob-code-inner js-file-line"><span class="pl-c">* along with paparazzi; see the file COPYING.  If not, write to</span></td>
      </tr>
      <tr>
        <td id="L18" class="blob-num js-line-number" data-line-number="18"></td>
        <td id="LC18" class="blob-code blob-code-inner js-file-line"><span class="pl-c">* the Free Software Foundation, 59 Temple Place - Suite 330,</span></td>
      </tr>
      <tr>
        <td id="L19" class="blob-num js-line-number" data-line-number="19"></td>
        <td id="LC19" class="blob-code blob-code-inner js-file-line"><span class="pl-c">* Boston, MA 02111-1307, USA.</span></td>
      </tr>
      <tr>
        <td id="L20" class="blob-num js-line-number" data-line-number="20"></td>
        <td id="LC20" class="blob-code blob-code-inner js-file-line"><span class="pl-c">*</span></td>
      </tr>
      <tr>
        <td id="L21" class="blob-num js-line-number" data-line-number="21"></td>
        <td id="LC21" class="blob-code blob-code-inner js-file-line"><span class="pl-c">*/</span></td>
      </tr>
      <tr>
        <td id="L22" class="blob-num js-line-number" data-line-number="22"></td>
        <td id="LC22" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L23" class="blob-num js-line-number" data-line-number="23"></td>
        <td id="LC23" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/**</span></td>
      </tr>
      <tr>
        <td id="L24" class="blob-num js-line-number" data-line-number="24"></td>
        <td id="LC24" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * @file boards/apogee/baro_board.c</span></td>
      </tr>
      <tr>
        <td id="L25" class="blob-num js-line-number" data-line-number="25"></td>
        <td id="LC25" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *</span></td>
      </tr>
      <tr>
        <td id="L26" class="blob-num js-line-number" data-line-number="26"></td>
        <td id="LC26" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * integrated barometer for Apogee boards (mpl3115)</span></td>
      </tr>
      <tr>
        <td id="L27" class="blob-num js-line-number" data-line-number="27"></td>
        <td id="LC27" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L28" class="blob-num js-line-number" data-line-number="28"></td>
        <td id="LC28" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L29" class="blob-num js-line-number" data-line-number="29"></td>
        <td id="LC29" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>std.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L30" class="blob-num js-line-number" data-line-number="30"></td>
        <td id="LC30" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>subsystems/sensors/baro.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L31" class="blob-num js-line-number" data-line-number="31"></td>
        <td id="LC31" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>peripherals/mpl3115.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L32" class="blob-num js-line-number" data-line-number="32"></td>
        <td id="LC32" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L33" class="blob-num js-line-number" data-line-number="33"></td>
        <td id="LC33" class="blob-code blob-code-inner js-file-line"><span class="pl-c">// to get MPU status</span></td>
      </tr>
      <tr>
        <td id="L34" class="blob-num js-line-number" data-line-number="34"></td>
        <td id="LC34" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>boards/apogee/imu_apogee.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L35" class="blob-num js-line-number" data-line-number="35"></td>
        <td id="LC35" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L36" class="blob-num js-line-number" data-line-number="36"></td>
        <td id="LC36" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>subsystems/abi.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L37" class="blob-num js-line-number" data-line-number="37"></td>
        <td id="LC37" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>led.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L38" class="blob-num js-line-number" data-line-number="38"></td>
        <td id="LC38" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L39" class="blob-num js-line-number" data-line-number="39"></td>
        <td id="LC39" class="blob-code blob-code-inner js-file-line"><span class="pl-c">// sd-log</span></td>
      </tr>
      <tr>
        <td id="L40" class="blob-num js-line-number" data-line-number="40"></td>
        <td id="LC40" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> APOGEE_BARO_SDLOG</td>
      </tr>
      <tr>
        <td id="L41" class="blob-num js-line-number" data-line-number="41"></td>
        <td id="LC41" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>sdLog.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L42" class="blob-num js-line-number" data-line-number="42"></td>
        <td id="LC42" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>subsystems/chibios-libopencm3/chibios_sdlog.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L43" class="blob-num js-line-number" data-line-number="43"></td>
        <td id="LC43" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>subsystems/gps.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L44" class="blob-num js-line-number" data-line-number="44"></td>
        <td id="LC44" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">bool_t</span> log_apogee_baro_started;</td>
      </tr>
      <tr>
        <td id="L45" class="blob-num js-line-number" data-line-number="45"></td>
        <td id="LC45" class="blob-code blob-code-inner js-file-line"><span class="pl-k">int</span> count_sd_writes;</td>
      </tr>
      <tr>
        <td id="L46" class="blob-num js-line-number" data-line-number="46"></td>
        <td id="LC46" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L47" class="blob-num js-line-number" data-line-number="47"></td>
        <td id="LC47" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L48" class="blob-num js-line-number" data-line-number="48"></td>
        <td id="LC48" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L49" class="blob-num js-line-number" data-line-number="49"></td>
        <td id="LC49" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/** Normal frequency with the default settings</span></td>
      </tr>
      <tr>
        <td id="L50" class="blob-num js-line-number" data-line-number="50"></td>
        <td id="LC50" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *</span></td>
      </tr>
      <tr>
        <td id="L51" class="blob-num js-line-number" data-line-number="51"></td>
        <td id="LC51" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * the baro read function should be called at 5 Hz</span></td>
      </tr>
      <tr>
        <td id="L52" class="blob-num js-line-number" data-line-number="52"></td>
        <td id="LC52" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L53" class="blob-num js-line-number" data-line-number="53"></td>
        <td id="LC53" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifndef</span> BARO_BOARD_APOGEE_FREQ</td>
      </tr>
      <tr>
        <td id="L54" class="blob-num js-line-number" data-line-number="54"></td>
        <td id="LC54" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">BARO_BOARD_APOGEE_FREQ</span> <span class="pl-c1">5</span></td>
      </tr>
      <tr>
        <td id="L55" class="blob-num js-line-number" data-line-number="55"></td>
        <td id="LC55" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L56" class="blob-num js-line-number" data-line-number="56"></td>
        <td id="LC56" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L57" class="blob-num js-line-number" data-line-number="57"></td>
        <td id="LC57" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/** Baro periodic prescaler</span></td>
      </tr>
      <tr>
        <td id="L58" class="blob-num js-line-number" data-line-number="58"></td>
        <td id="LC58" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *</span></td>
      </tr>
      <tr>
        <td id="L59" class="blob-num js-line-number" data-line-number="59"></td>
        <td id="LC59" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * different for fixedwing and rotorcraft...</span></td>
      </tr>
      <tr>
        <td id="L60" class="blob-num js-line-number" data-line-number="60"></td>
        <td id="LC60" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L61" class="blob-num js-line-number" data-line-number="61"></td>
        <td id="LC61" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> BARO_PERIODIC_FREQUENCY</td>
      </tr>
      <tr>
        <td id="L62" class="blob-num js-line-number" data-line-number="62"></td>
        <td id="LC62" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">MPL_PRESCALER</span> ((BARO_PERIODIC_FREQUENCY)/BARO_BOARD_APOGEE_FREQ)</td>
      </tr>
      <tr>
        <td id="L63" class="blob-num js-line-number" data-line-number="63"></td>
        <td id="LC63" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L64" class="blob-num js-line-number" data-line-number="64"></td>
        <td id="LC64" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> PERIODIC_FREQUENCY</td>
      </tr>
      <tr>
        <td id="L65" class="blob-num js-line-number" data-line-number="65"></td>
        <td id="LC65" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">MPL_PRESCALER</span> ((PERIODIC_FREQUENCY)/BARO_BOARD_APOGEE_FREQ)</td>
      </tr>
      <tr>
        <td id="L66" class="blob-num js-line-number" data-line-number="66"></td>
        <td id="LC66" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L67" class="blob-num js-line-number" data-line-number="67"></td>
        <td id="LC67" class="blob-code blob-code-inner js-file-line"><span class="pl-c">// default: assuming 60Hz for a 5Hz baro update</span></td>
      </tr>
      <tr>
        <td id="L68" class="blob-num js-line-number" data-line-number="68"></td>
        <td id="LC68" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">MPL_PRESCALER</span> <span class="pl-c1">12</span></td>
      </tr>
      <tr>
        <td id="L69" class="blob-num js-line-number" data-line-number="69"></td>
        <td id="LC69" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L70" class="blob-num js-line-number" data-line-number="70"></td>
        <td id="LC70" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L71" class="blob-num js-line-number" data-line-number="71"></td>
        <td id="LC71" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L72" class="blob-num js-line-number" data-line-number="72"></td>
        <td id="LC72" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/** Counter to init ads1114 at startup */</span></td>
      </tr>
      <tr>
        <td id="L73" class="blob-num js-line-number" data-line-number="73"></td>
        <td id="LC73" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">BARO_STARTUP_COUNTER</span> (<span class="pl-c1">200</span>/(MPL_PRESCALER))</td>
      </tr>
      <tr>
        <td id="L74" class="blob-num js-line-number" data-line-number="74"></td>
        <td id="LC74" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">uint16_t</span> startup_cnt;</td>
      </tr>
      <tr>
        <td id="L75" class="blob-num js-line-number" data-line-number="75"></td>
        <td id="LC75" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L76" class="blob-num js-line-number" data-line-number="76"></td>
        <td id="LC76" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> Mpl3115 apogee_baro;</td>
      </tr>
      <tr>
        <td id="L77" class="blob-num js-line-number" data-line-number="77"></td>
        <td id="LC77" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L78" class="blob-num js-line-number" data-line-number="78"></td>
        <td id="LC78" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">baro_init</span>(<span class="pl-k">void</span>)</td>
      </tr>
      <tr>
        <td id="L79" class="blob-num js-line-number" data-line-number="79"></td>
        <td id="LC79" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L80" class="blob-num js-line-number" data-line-number="80"></td>
        <td id="LC80" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">mpl3115_init</span>(&amp;apogee_baro, &amp;i2c1, MPL3115_I2C_ADDR);</td>
      </tr>
      <tr>
        <td id="L81" class="blob-num js-line-number" data-line-number="81"></td>
        <td id="LC81" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> BARO_LED</td>
      </tr>
      <tr>
        <td id="L82" class="blob-num js-line-number" data-line-number="82"></td>
        <td id="LC82" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">LED_OFF</span>(BARO_LED);</td>
      </tr>
      <tr>
        <td id="L83" class="blob-num js-line-number" data-line-number="83"></td>
        <td id="LC83" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L84" class="blob-num js-line-number" data-line-number="84"></td>
        <td id="LC84" class="blob-code blob-code-inner js-file-line">  startup_cnt = BARO_STARTUP_COUNTER;</td>
      </tr>
      <tr>
        <td id="L85" class="blob-num js-line-number" data-line-number="85"></td>
        <td id="LC85" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L86" class="blob-num js-line-number" data-line-number="86"></td>
        <td id="LC86" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> APOGEE_BARO_SDLOG</td>
      </tr>
      <tr>
        <td id="L87" class="blob-num js-line-number" data-line-number="87"></td>
        <td id="LC87" class="blob-code blob-code-inner js-file-line">  log_apogee_baro_started = <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="L88" class="blob-num js-line-number" data-line-number="88"></td>
        <td id="LC88" class="blob-code blob-code-inner js-file-line">  count_sd_writes=<span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L89" class="blob-num js-line-number" data-line-number="89"></td>
        <td id="LC89" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L90" class="blob-num js-line-number" data-line-number="90"></td>
        <td id="LC90" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L91" class="blob-num js-line-number" data-line-number="91"></td>
        <td id="LC91" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L92" class="blob-num js-line-number" data-line-number="92"></td>
        <td id="LC92" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L93" class="blob-num js-line-number" data-line-number="93"></td>
        <td id="LC93" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">baro_periodic</span>(<span class="pl-k">void</span>)</td>
      </tr>
      <tr>
        <td id="L94" class="blob-num js-line-number" data-line-number="94"></td>
        <td id="LC94" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L95" class="blob-num js-line-number" data-line-number="95"></td>
        <td id="LC95" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L96" class="blob-num js-line-number" data-line-number="96"></td>
        <td id="LC96" class="blob-code blob-code-inner js-file-line">  <span class="pl-c">// Baro is slave of the MPU, only start reading it after MPU is configured</span></td>
      </tr>
      <tr>
        <td id="L97" class="blob-num js-line-number" data-line-number="97"></td>
        <td id="LC97" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (imu_apogee.<span class="pl-smi">mpu</span>.<span class="pl-smi">config</span>.<span class="pl-smi">initialized</span>) {</td>
      </tr>
      <tr>
        <td id="L98" class="blob-num js-line-number" data-line-number="98"></td>
        <td id="LC98" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L99" class="blob-num js-line-number" data-line-number="99"></td>
        <td id="LC99" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (startup_cnt &gt; <span class="pl-c1">0</span> &amp;&amp; apogee_baro.<span class="pl-smi">data_available</span>) {</td>
      </tr>
      <tr>
        <td id="L100" class="blob-num js-line-number" data-line-number="100"></td>
        <td id="LC100" class="blob-code blob-code-inner js-file-line">      <span class="pl-c">// Run some loops to get correct readings from the adc</span></td>
      </tr>
      <tr>
        <td id="L101" class="blob-num js-line-number" data-line-number="101"></td>
        <td id="LC101" class="blob-code blob-code-inner js-file-line">      --startup_cnt;</td>
      </tr>
      <tr>
        <td id="L102" class="blob-num js-line-number" data-line-number="102"></td>
        <td id="LC102" class="blob-code blob-code-inner js-file-line">      apogee_baro.<span class="pl-smi">data_available</span> = <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="L103" class="blob-num js-line-number" data-line-number="103"></td>
        <td id="LC103" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> BARO_LED</td>
      </tr>
      <tr>
        <td id="L104" class="blob-num js-line-number" data-line-number="104"></td>
        <td id="LC104" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">LED_TOGGLE</span>(BARO_LED);</td>
      </tr>
      <tr>
        <td id="L105" class="blob-num js-line-number" data-line-number="105"></td>
        <td id="LC105" class="blob-code blob-code-inner js-file-line">      <span class="pl-k">if</span> (startup_cnt == <span class="pl-c1">0</span>) {</td>
      </tr>
      <tr>
        <td id="L106" class="blob-num js-line-number" data-line-number="106"></td>
        <td id="LC106" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">LED_ON</span>(BARO_LED);</td>
      </tr>
      <tr>
        <td id="L107" class="blob-num js-line-number" data-line-number="107"></td>
        <td id="LC107" class="blob-code blob-code-inner js-file-line">      }</td>
      </tr>
      <tr>
        <td id="L108" class="blob-num js-line-number" data-line-number="108"></td>
        <td id="LC108" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L109" class="blob-num js-line-number" data-line-number="109"></td>
        <td id="LC109" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L110" class="blob-num js-line-number" data-line-number="110"></td>
        <td id="LC110" class="blob-code blob-code-inner js-file-line">    <span class="pl-c">// Read the sensor</span></td>
      </tr>
      <tr>
        <td id="L111" class="blob-num js-line-number" data-line-number="111"></td>
        <td id="LC111" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">RunOnceEvery</span>(MPL_PRESCALER, <span class="pl-c1">mpl3115_periodic</span>(&amp;apogee_baro));</td>
      </tr>
      <tr>
        <td id="L112" class="blob-num js-line-number" data-line-number="112"></td>
        <td id="LC112" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="L113" class="blob-num js-line-number" data-line-number="113"></td>
        <td id="LC113" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L114" class="blob-num js-line-number" data-line-number="114"></td>
        <td id="LC114" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L115" class="blob-num js-line-number" data-line-number="115"></td>
        <td id="LC115" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">apogee_baro_event</span>(<span class="pl-k">void</span>)</td>
      </tr>
      <tr>
        <td id="L116" class="blob-num js-line-number" data-line-number="116"></td>
        <td id="LC116" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L117" class="blob-num js-line-number" data-line-number="117"></td>
        <td id="LC117" class="blob-code blob-code-inner js-file-line">  <span class="pl-c1">mpl3115_event</span>(&amp;apogee_baro);</td>
      </tr>
      <tr>
        <td id="L118" class="blob-num js-line-number" data-line-number="118"></td>
        <td id="LC118" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (apogee_baro.<span class="pl-smi">data_available</span> &amp;&amp; startup_cnt == <span class="pl-c1">0</span>) {</td>
      </tr>
      <tr>
        <td id="L119" class="blob-num js-line-number" data-line-number="119"></td>
        <td id="LC119" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> pressure = ((<span class="pl-k">float</span>)apogee_baro.<span class="pl-smi">pressure</span> / (<span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">2</span>));</td>
      </tr>
      <tr>
        <td id="L120" class="blob-num js-line-number" data-line-number="120"></td>
        <td id="LC120" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">AbiSendMsgBARO_ABS</span>(BARO_BOARD_SENDER_ID, pressure);</td>
      </tr>
      <tr>
        <td id="L121" class="blob-num js-line-number" data-line-number="121"></td>
        <td id="LC121" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span> temp = apogee_baro.<span class="pl-smi">temperature</span> / <span class="pl-c1">16</span>.<span class="pl-c1">0f</span>;</td>
      </tr>
      <tr>
        <td id="L122" class="blob-num js-line-number" data-line-number="122"></td>
        <td id="LC122" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">AbiSendMsgTEMPERATURE</span>(BARO_BOARD_SENDER_ID, temp);</td>
      </tr>
      <tr>
        <td id="L123" class="blob-num js-line-number" data-line-number="123"></td>
        <td id="LC123" class="blob-code blob-code-inner js-file-line">    apogee_baro.<span class="pl-smi">data_available</span> = <span class="pl-c1">FALSE</span>;</td>
      </tr>
      <tr>
        <td id="L124" class="blob-num js-line-number" data-line-number="124"></td>
        <td id="LC124" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L125" class="blob-num js-line-number" data-line-number="125"></td>
        <td id="LC125" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> APOGEE_BARO_SDLOG</td>
      </tr>
      <tr>
        <td id="L126" class="blob-num js-line-number" data-line-number="126"></td>
        <td id="LC126" class="blob-code blob-code-inner js-file-line">  <span class="pl-k">if</span> (pprzLogFile != -<span class="pl-c1">1</span>) {</td>
      </tr>
      <tr>
        <td id="L127" class="blob-num js-line-number" data-line-number="127"></td>
        <td id="LC127" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (!log_apogee_baro_started) {</td>
      </tr>
      <tr>
        <td id="L128" class="blob-num js-line-number" data-line-number="128"></td>
        <td id="LC128" class="blob-code blob-code-inner js-file-line">      <span class="pl-c1">sdLogWriteLog</span>(pprzLogFile, <span class="pl-s"><span class="pl-pds">&quot;</span>APOGEE_BARO: Pres(Pa) Temp/degC) GPS_fix TOW(ms) Week Lat(1e7deg) Lon(1e7deg) HMSL(mm) gpseed(cm/s) course(1e7deg) climb(cm/s)<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L129" class="blob-num js-line-number" data-line-number="129"></td>
        <td id="LC129" class="blob-code blob-code-inner js-file-line">      log_apogee_baro_started = <span class="pl-c1">TRUE</span>;</td>
      </tr>
      <tr>
        <td id="L130" class="blob-num js-line-number" data-line-number="130"></td>
        <td id="LC130" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L131" class="blob-num js-line-number" data-line-number="131"></td>
        <td id="LC131" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (count_sd_writes == <span class="pl-c1">0</span>) {</td>
      </tr>
      <tr>
        <td id="L132" class="blob-num js-line-number" data-line-number="132"></td>
        <td id="LC132" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">sdLogWriteLog</span>(pprzLogFile, <span class="pl-s"><span class="pl-pds">&quot;</span>apogee_baro: <span class="pl-c1">%9.4f</span> <span class="pl-c1">%9.4f</span> <span class="pl-c1">%d</span> <span class="pl-c1">%d</span> <span class="pl-c1">%d</span>   <span class="pl-c1">%d</span> <span class="pl-c1">%d</span> <span class="pl-c1">%d</span>   <span class="pl-c1">%d</span> <span class="pl-c1">%d</span> <span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>,</td>
      </tr>
      <tr>
        <td id="L133" class="blob-num js-line-number" data-line-number="133"></td>
        <td id="LC133" class="blob-code blob-code-inner js-file-line">		  pressure,temp,</td>
      </tr>
      <tr>
        <td id="L134" class="blob-num js-line-number" data-line-number="134"></td>
        <td id="LC134" class="blob-code blob-code-inner js-file-line">		  gps.<span class="pl-smi">fix</span>, gps.<span class="pl-smi">tow</span>, gps.<span class="pl-smi">week</span>,</td>
      </tr>
      <tr>
        <td id="L135" class="blob-num js-line-number" data-line-number="135"></td>
        <td id="LC135" class="blob-code blob-code-inner js-file-line">		  gps.<span class="pl-smi">lla_pos</span>.<span class="pl-smi">lat</span>, gps.<span class="pl-smi">lla_pos</span>.<span class="pl-smi">lon</span>, gps.<span class="pl-smi">hmsl</span>,</td>
      </tr>
      <tr>
        <td id="L136" class="blob-num js-line-number" data-line-number="136"></td>
        <td id="LC136" class="blob-code blob-code-inner js-file-line">		  gps.<span class="pl-smi">gspeed</span>, gps.<span class="pl-smi">course</span>, -gps.<span class="pl-smi">ned_vel</span>.<span class="pl-smi">z</span>);</td>
      </tr>
      <tr>
        <td id="L137" class="blob-num js-line-number" data-line-number="137"></td>
        <td id="LC137" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L138" class="blob-num js-line-number" data-line-number="138"></td>
        <td id="LC138" class="blob-code blob-code-inner js-file-line">    count_sd_writes++;</td>
      </tr>
      <tr>
        <td id="L139" class="blob-num js-line-number" data-line-number="139"></td>
        <td id="LC139" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (count_sd_writes &gt; <span class="pl-c1">8</span>) {count_sd_writes=<span class="pl-c1">0</span>;}</td>
      </tr>
      <tr>
        <td id="L140" class="blob-num js-line-number" data-line-number="140"></td>
        <td id="LC140" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="L141" class="blob-num js-line-number" data-line-number="141"></td>
        <td id="LC141" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L142" class="blob-num js-line-number" data-line-number="142"></td>
        <td id="LC142" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L143" class="blob-num js-line-number" data-line-number="143"></td>
        <td id="LC143" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L144" class="blob-num js-line-number" data-line-number="144"></td>
        <td id="LC144" class="blob-code blob-code-inner js-file-line">  }</td>
      </tr>
      <tr>
        <td id="L145" class="blob-num js-line-number" data-line-number="145"></td>
        <td id="LC145" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L146" class="blob-num js-line-number" data-line-number="146"></td>
        <td id="LC146" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
</table>

  </div>

</div>

<a href="#jump-to-line" rel="facebox[.linejump]" data-hotkey="l" style="display:none">Jump to Line</a>
<div id="jump-to-line" style="display:none">
  <!-- </textarea> --><!-- '"` --><form accept-charset="UTF-8" action="" class="js-jump-to-line-form" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
    <input class="linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" aria-label="Jump to line" autofocus>
    <button type="submit" class="btn">Go</button>
</form></div>

  </div>
  <div class="modal-backdrop"></div>
</div>

    </div>
  </div>

    </div>

        <div class="container">
  <div class="site-footer" role="contentinfo">
    <ul class="site-footer-links right">
        <li><a href="https://status.github.com/" data-ga-click="Footer, go to status, text:status">Status</a></li>
      <li><a href="https://developer.github.com" data-ga-click="Footer, go to api, text:api">API</a></li>
      <li><a href="https://training.github.com" data-ga-click="Footer, go to training, text:training">Training</a></li>
      <li><a href="https://shop.github.com" data-ga-click="Footer, go to shop, text:shop">Shop</a></li>
        <li><a href="https://github.com/blog" data-ga-click="Footer, go to blog, text:blog">Blog</a></li>
        <li><a href="https://github.com/about" data-ga-click="Footer, go to about, text:about">About</a></li>
        <li><a href="https://github.com/pricing" data-ga-click="Footer, go to pricing, text:pricing">Pricing</a></li>

    </ul>

    <a href="https://github.com" aria-label="Homepage">
      <span aria-hidden="true" class="mega-octicon octicon-mark-github" title="GitHub "></span>
</a>
    <ul class="site-footer-links">
      <li>&copy; 2016 <span title="0.07045s from github-fe118-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="https://github.com/site/terms" data-ga-click="Footer, go to terms, text:terms">Terms</a></li>
        <li><a href="https://github.com/site/privacy" data-ga-click="Footer, go to privacy, text:privacy">Privacy</a></li>
        <li><a href="https://github.com/security" data-ga-click="Footer, go to security, text:security">Security</a></li>
        <li><a href="https://github.com/contact" data-ga-click="Footer, go to contact, text:contact">Contact</a></li>
        <li><a href="https://help.github.com" data-ga-click="Footer, go to help, text:help">Help</a></li>
    </ul>
  </div>
</div>



    
    
    

    <div id="ajax-error-message" class="flash flash-error">
      <span aria-hidden="true" class="octicon octicon-alert"></span>
      <button type="button" class="flash-close js-flash-close js-ajax-error-dismiss" aria-label="Dismiss error">
        <span aria-hidden="true" class="octicon octicon-x"></span>
      </button>
      Something went wrong with that request. Please try again.
    </div>


      <script crossorigin="anonymous" src="https://assets-cdn.github.com/assets/frameworks-2895475c714f13790b63e636b5389a6918a260259c5b22a15acf5ef26bd6ef09.js"></script>
      <script async="async" crossorigin="anonymous" src="https://assets-cdn.github.com/assets/github-c0404608a3bcd1310776df0ab26e107bfd70ff0382408f43ede1a81e730e39cd.js"></script>
      
      
      
    <div class="js-stale-session-flash stale-session-flash flash flash-warn flash-banner hidden">
      <span aria-hidden="true" class="octicon octicon-alert"></span>
      <span class="signed-in-tab-flash">You signed in with another tab or window. <a href="">Reload</a> to refresh your session.</span>
      <span class="signed-out-tab-flash">You signed out in another tab or window. <a href="">Reload</a> to refresh your session.</span>
    </div>
    <div class="facebox" id="facebox" style="display:none;">
  <div class="facebox-popup">
    <div class="facebox-content" role="dialog" aria-labelledby="facebox-header" aria-describedby="facebox-description">
    </div>
    <button type="button" class="facebox-close js-facebox-close" aria-label="Close modal">
      <span aria-hidden="true" class="octicon octicon-x"></span>
    </button>
  </div>
</div>

  </body>
</html>

