//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEEmptyStateView.h"

@class NSURL;
@protocol GLUETheme, SPTLinkDispatcher, SPTMetaViewController, SPTNavigationRouter, SPTPodcastLogger;

@interface SPTPodcastCollectionYourLibraryEmptyStateView : GLUEEmptyStateView
{
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTMetaViewController> _metaViewController;
    id <SPTNavigationRouter> _navigationRouter;
    unsigned long long _type;
    id <GLUETheme> _theme;
    NSURL *_navigateURI;
    NSURL *_URI;
    NSURL *_navigateFromURI;
    id <SPTPodcastLogger> _podcastLogger;
}

+ (id)emptyStateDownloadsViewTheme:(id)arg1 linkDispatcher:(id)arg2 metaViewController:(id)arg3 navigationRouter:(id)arg4 podcastLogger:(id)arg5 viewURI:(id)arg6;
+ (id)emptyStateEpisodesViewTheme:(id)arg1 linkDispatcher:(id)arg2 metaViewController:(id)arg3 navigationRouter:(id)arg4 podcastLogger:(id)arg5 viewURI:(id)arg6;
+ (id)emptyStateShowsViewTheme:(id)arg1 linkDispatcher:(id)arg2 metaViewController:(id)arg3 navigationRouter:(id)arg4 podcastLogger:(id)arg5 viewURI:(id)arg6;
@property(retain, nonatomic) id <SPTPodcastLogger> podcastLogger; // @synthesize podcastLogger=_podcastLogger;
@property(retain, nonatomic) NSURL *navigateFromURI; // @synthesize navigateFromURI=_navigateFromURI;
@property(retain, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(retain, nonatomic) NSURL *navigateURI; // @synthesize navigateURI=_navigateURI;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(nonatomic) __weak id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
- (void).cxx_destruct;
- (id)entityPageEmptyStateViewStyle;
- (void)applyThemeLayout;
- (void)onAction:(id)arg1;
- (id)setBodyText:(id)arg1 withIcon:(long long)arg2;
- (id)bodyText;
- (id)featureId;
- (id)titleText;
- (void)setup;
- (id)initWithTheme:(id)arg1 collectionType:(unsigned long long)arg2 linkDispatcher:(id)arg3 metaViewController:(id)arg4 navigationRouter:(id)arg5 podcastLogger:(id)arg6 viewURI:(id)arg7;

@end

