//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonController.h"

#import "FavoriteFetcherDelegate-Protocol.h"
#import "InvitationPopUpDelegate-Protocol.h"
#import "UIActivityItemSource-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class DZFlatButton, DZOEnqueueCallback, DZOFetchCallback, DeezerTrack, DeezerWebApplication, FavoriteFetcher, NSArray, NSString, NSTimer, UIWebView;
@protocol DZRShareable;

@interface WebApplicationViewController : CommonController <UIWebViewDelegate, InvitationPopUpDelegate, FavoriteFetcherDelegate, UIActivityItemSource>
{
    _Bool _webViewShrinked;
    _Bool _webApplicationIsLoaded;
    _Bool _hasBeenInBlindTestMode;
    DeezerWebApplication *_webApplication;
    NSString *_startPage;
    UIWebView *_webView;
    DeezerTrack *_currentTrack;
    NSArray *_currentTracklist;
    double _currentVolume;
    NSTimer *progressTimer;
    long long currentTrackElaspedTime;
    NSString *expectedPlayerEventAtTrackChange;
    NSString *expectedPlayerEventId;
    FavoriteFetcher *favoriteFetcher;
    DZOFetchCallback *objectInfosFetchCallback;
    DZOFetchCallback *playlistDetailsFetchCallback;
    DZOEnqueueCallback *pausingEnqueueCallback;
    NSArray *_addToMyAppButtonVerticalConstraints;
    DZFlatButton *_addAppToFavoritesBtn;
    long long _currentTrackDuration;
    DZOFetchCallback *_shareItemFetchCallback;
    id <DZRShareable> _item;
}

@property(retain, nonatomic) id <DZRShareable> item; // @synthesize item=_item;
@property(retain, nonatomic) DZOFetchCallback *shareItemFetchCallback; // @synthesize shareItemFetchCallback=_shareItemFetchCallback;
@property(nonatomic) long long currentTrackDuration; // @synthesize currentTrackDuration=_currentTrackDuration;
@property(nonatomic) _Bool hasBeenInBlindTestMode; // @synthesize hasBeenInBlindTestMode=_hasBeenInBlindTestMode;
@property(nonatomic) _Bool webApplicationIsLoaded; // @synthesize webApplicationIsLoaded=_webApplicationIsLoaded;
@property(nonatomic) _Bool webViewShrinked; // @synthesize webViewShrinked=_webViewShrinked;
@property(retain, nonatomic) DZFlatButton *addAppToFavoritesBtn; // @synthesize addAppToFavoritesBtn=_addAppToFavoritesBtn;
@property(retain, nonatomic) NSArray *addToMyAppButtonVerticalConstraints; // @synthesize addToMyAppButtonVerticalConstraints=_addToMyAppButtonVerticalConstraints;
@property(retain, nonatomic) DZOEnqueueCallback *pausingEnqueueCallback; // @synthesize pausingEnqueueCallback;
@property(retain, nonatomic) DZOFetchCallback *playlistDetailsFetchCallback; // @synthesize playlistDetailsFetchCallback;
@property(retain, nonatomic) DZOFetchCallback *objectInfosFetchCallback; // @synthesize objectInfosFetchCallback;
@property(retain, nonatomic) FavoriteFetcher *favoriteFetcher; // @synthesize favoriteFetcher;
@property(copy, nonatomic) NSString *expectedPlayerEventId; // @synthesize expectedPlayerEventId;
@property(copy, nonatomic) NSString *expectedPlayerEventAtTrackChange; // @synthesize expectedPlayerEventAtTrackChange;
@property(nonatomic) long long currentTrackElaspedTime; // @synthesize currentTrackElaspedTime;
@property(retain, nonatomic) NSTimer *progressTimer; // @synthesize progressTimer;
@property(nonatomic) double currentVolume; // @synthesize currentVolume=_currentVolume;
@property(retain, nonatomic) NSArray *currentTracklist; // @synthesize currentTracklist=_currentTracklist;
@property(retain, nonatomic) DeezerTrack *currentTrack; // @synthesize currentTrack=_currentTrack;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSString *startPage; // @synthesize startPage=_startPage;
@property(retain, nonatomic) DeezerWebApplication *webApplication; // @synthesize webApplication=_webApplication;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)navigationPath;
- (void)setUpAddToFavoritesButton;
- (void)shrinkWebViewAndDisplayAddToFavBtn:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideAddFavoriteBtn;
- (void)showAddFavoriteBtn;
- (_Bool)shouldShowAddAppButton;
- (void)addAppToFavorites:(id)arg1;
- (void)stopTicking;
- (void)tickPlaying;
- (void)startTickingPlaying;
- (int)playerEventTypeForString:(id)arg1;
- (id)nameOfEvent:(int)arg1;
- (void)didUpdatePlayingTrack:(id)arg1;
- (void)tracksLoadedWithTypeString:(id)arg1 deezerId:(id)arg2 andTracks:(id)arg3;
- (void)tracksOrderChanged:(id)arg1;
- (void)repeatModeChanged:(id)arg1;
- (void)shuffleChanged:(id)arg1;
- (void)seekChanged:(id)arg1;
- (void)volumeChanged:(id)arg1;
- (void)playerDidPause:(id)arg1;
- (void)playerDidPlay:(id)arg1;
- (void)playerDidChangeTrack:(id)arg1;
- (id)dictionaryTrackFromDeezerTrack:(id)arg1;
- (id)jsonStringFromObject:(id)arg1;
- (void)triggerJavaScriptWithObject:(id)arg1;
- (void)firstLoad;
- (void)webAppDidLoad:(id)arg1;
- (void)addTracksToPlaylist:(id)arg1;
- (void)goToHome;
- (void)handleExternalLink:(id)arg1;
- (void)invitationPopUp:(id)arg1 didCloseWithRequestId:(id)arg2 andSuccess:(_Bool)arg3;
- (void)invite:(id)arg1;
- (void)shareItem:(id)arg1;
- (void)share:(id)arg1;
- (void)webApplicationRemovedFromFavorites:(id)arg1;
- (void)mixRemovedFromFavorites:(id)arg1;
- (void)playlistRemovedFromFavorites:(id)arg1;
- (void)friendRemovedFromFavorites:(id)arg1;
- (void)artistRemovedFromFavorites:(id)arg1;
- (void)albumRemovedFromFavorites:(id)arg1;
- (void)webApplicationAddedToFavorites:(id)arg1;
- (void)mixAddedToFavorites:(id)arg1;
- (void)friendAddedToFavorites:(id)arg1;
- (void)artistAddedToFavorites:(id)arg1;
- (void)albumAddedToFavorites:(id)arg1;
- (void)onFavorite:(id)arg1 deezerId:(id)arg2 isFavorite:(_Bool)arg3;
- (void)removeFromFavorite:(id)arg1;
- (void)addToFavorite:(id)arg1 shouldSynchronize:(_Bool)arg2;
- (void)addToFavorite:(id)arg1;
- (void)favoriteFetcher:(id)arg1 didCompleteFetchingWithDictionary:(id)arg2;
- (void)askFavorites:(id)arg1;
- (void)addToPlaylist:(id)arg1;
- (void)playTracksWithPlayerEventType:(int)arg1 infosDictionary:(id)arg2;
- (void)doAction:(id)arg1;
- (_Bool)handleDeezerUrl:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
