//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APPlayerManagerDelegate-Protocol.h"
#import "AllPlayCreateGroupOperationDelegate-Protocol.h"
#import "AllPlayEditGroupOperationDelegate-Protocol.h"
#import "AllPlayGroupCreateEditViewControllerDelegate-Protocol.h"
#import "AllPlayPlayerDelegate-Protocol.h"
#import "AllPlaySelectionViewControllerDelegate-Protocol.h"

@class APMediaItem, APPlayerManager, AllPlayButton, AllPlayGroupCreateEditViewController, AllPlayPlayer, AllPlayReachability, AllPlaySelectionViewController, AllPlayVolumeContainerViewController, NSMutableDictionary, NSOperationQueue, NSString, UIActivityIndicatorView, UIView;
@protocol AllPlayControllerDelegate;

@interface AllPlayController : NSObject <APPlayerManagerDelegate, AllPlayPlayerDelegate, AllPlayGroupCreateEditViewControllerDelegate, AllPlaySelectionViewControllerDelegate, AllPlayCreateGroupOperationDelegate, AllPlayEditGroupOperationDelegate>
{
    _Bool _haveLocalPlayer;
    _Bool _isCurrentPlayerLocalPlayer;
    _Bool _stateCheck;
    _Bool _loadingInProgress;
    int _lastSeenIndex;
    id <AllPlayControllerDelegate> _delegate;
    AllPlayPlayer *_allPlayPlayer;
    APPlayerManager *_playerManager;
    AllPlayButton *_allPlayButton;
    UIView *_viewToShowScreensIn;
    AllPlayGroupCreateEditViewController *_groupCreateEditViewController;
    AllPlaySelectionViewController *_playerSelectionViewController;
    APMediaItem *_lastSeenItem;
    AllPlayVolumeContainerViewController *_containerViewController;
    NSOperationQueue *_createGroupOperationQueue;
    NSOperationQueue *_editGroupOperationQueue;
    NSMutableDictionary *_restoredZoneDict;
    NSMutableDictionary *_selectedZoneDict;
    AllPlayReachability *_internetReach;
    UIActivityIndicatorView *_groupCreationSpinner;
    UIView *_loadingOverlay;
    long long _currentPlayerState;
    NSString *_appName;
}

+ (id)sharedControllerWithAppName:(id)arg1;
@property _Bool loadingInProgress; // @synthesize loadingInProgress=_loadingInProgress;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) long long currentPlayerState; // @synthesize currentPlayerState=_currentPlayerState;
@property(nonatomic) _Bool stateCheck; // @synthesize stateCheck=_stateCheck;
@property(retain, nonatomic) UIView *loadingOverlay; // @synthesize loadingOverlay=_loadingOverlay;
@property(retain, nonatomic) UIActivityIndicatorView *groupCreationSpinner; // @synthesize groupCreationSpinner=_groupCreationSpinner;
@property(retain, nonatomic) AllPlayReachability *internetReach; // @synthesize internetReach=_internetReach;
@property(retain, nonatomic) NSMutableDictionary *selectedZoneDict; // @synthesize selectedZoneDict=_selectedZoneDict;
@property(retain, nonatomic) NSMutableDictionary *restoredZoneDict; // @synthesize restoredZoneDict=_restoredZoneDict;
@property(retain, nonatomic) NSOperationQueue *editGroupOperationQueue; // @synthesize editGroupOperationQueue=_editGroupOperationQueue;
@property(retain, nonatomic) NSOperationQueue *createGroupOperationQueue; // @synthesize createGroupOperationQueue=_createGroupOperationQueue;
@property(retain, nonatomic) AllPlayVolumeContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) int lastSeenIndex; // @synthesize lastSeenIndex=_lastSeenIndex;
@property(retain, nonatomic) APMediaItem *lastSeenItem; // @synthesize lastSeenItem=_lastSeenItem;
@property(nonatomic) _Bool isCurrentPlayerLocalPlayer; // @synthesize isCurrentPlayerLocalPlayer=_isCurrentPlayerLocalPlayer;
@property(retain, nonatomic) AllPlaySelectionViewController *playerSelectionViewController; // @synthesize playerSelectionViewController=_playerSelectionViewController;
@property(retain, nonatomic) AllPlayGroupCreateEditViewController *groupCreateEditViewController; // @synthesize groupCreateEditViewController=_groupCreateEditViewController;
@property(retain, nonatomic) UIView *viewToShowScreensIn; // @synthesize viewToShowScreensIn=_viewToShowScreensIn;
@property(retain, nonatomic) AllPlayButton *allPlayButton; // @synthesize allPlayButton=_allPlayButton;
@property(retain, nonatomic) APPlayerManager *playerManager; // @synthesize playerManager=_playerManager;
@property(nonatomic) _Bool haveLocalPlayer; // @synthesize haveLocalPlayer=_haveLocalPlayer;
@property(retain, nonatomic) AllPlayPlayer *allPlayPlayer; // @synthesize allPlayPlayer=_allPlayPlayer;
@property(nonatomic) id <AllPlayControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reachabilityChanged:(id)arg1;
- (void)editGroupOperationDidFinish:(id)arg1;
- (void)createGroupOperationDidFinish:(id)arg1;
- (void)disconnect;
- (void)didFailWithError:(id)arg1;
- (void)allPlaySelectionViewController:(id)arg1 didRequestHideVolumeBar:(_Bool)arg2;
- (void)allPlaySelectionViewController:(id)arg1 didRequestGroupEditingViewWithZone:(id)arg2;
- (void)allPlaySelectionViewControllerDidRequestGroupCreationView:(id)arg1;
- (void)allPlaySelectionViewControllerDidCancel:(id)arg1;
- (void)allPlaySelectionViewController:(id)arg1 didSelectZone:(id)arg2;
- (void)allPlaySelectionViewControllerDidSelectLocalPlayer:(id)arg1;
- (void)allPlayGroupViewControllerCancel:(id)arg1;
- (void)allPlayGroupViewController:(id)arg1 editZoneWithZone:(id)arg2 withPlayers:(id)arg3;
- (void)allPlayGroupViewController:(id)arg1 createZoneWithPlayers:(id)arg2;
- (void)playerManager:(id)arg1 player:(id)arg2 partyModeEnabledChanged:(_Bool)arg3;
- (void)playerManager:(id)arg1 zoneControlsEnabledChanged:(id)arg2;
- (void)playerManager:(id)arg1 player:(id)arg2 volumeEnabledChanged:(_Bool)arg3;
- (void)playerManager:(id)arg1 player:(id)arg2 interruptibleChanged:(_Bool)arg3;
- (void)playerManager:(id)arg1 playlist:(id)arg2 shuffleStateChanged:(long long)arg3;
- (void)playerManager:(id)arg1 playlist:(id)arg2 loopStateChanged:(long long)arg3;
- (void)playerManager:(id)arg1 zone:(id)arg2 playbackErrorInIndex:(int)arg3 error:(id)arg4;
- (void)playerManager:(id)arg1 zoneWithNewID:(id)arg2 oldZoneID:(id)arg3;
- (void)playerManager:(id)arg1 zonePlayersListChanged:(id)arg2;
- (void)playerManager:(id)arg1 player:(id)arg2 displayNameChanged:(id)arg3;
- (void)playerManager:(id)arg1 player:(id)arg2 volumeStateChanged:(int)arg3;
- (void)playerManager:(id)arg1 zone:(id)arg2 playStateChanged:(long long)arg3;
- (void)playerManager:(id)arg1 playlistChanged:(id)arg2;
- (void)playerManager:(id)arg1 zoneRemoved:(id)arg2;
- (void)playerManager:(id)arg1 zoneAdded:(id)arg2;
- (void)dismissLoadingView;
- (void)triggerLoadingView;
- (void)switchToAllPlayPlayer:(id)arg1;
- (void)switchToAllPlayPlayer:(id)arg1 withStreamInfo:(id)arg2 withOutgoingZone:(id)arg3 haveLead:(_Bool)arg4;
- (void)notifyError:(id)arg1;
- (void)notifyAllPlayPlayerLost:(_Bool)arg1 clearPlaylist:(_Bool)arg2;
- (void)handlePlayerReconnect:(id)arg1;
- (id)infoFromZone:(id)arg1;
- (_Bool)connectToAvailableAllPlayerPlayer;
- (id)lastPresentedViewControllerOf:(id)arg1;
- (void)showAllPlayers;
- (id)createAllPlayUIInView:(id)arg1 withDisconnectedImageViewStyle:(long long)arg2;
- (id)createAllPlayUIInView:(id)arg1;
- (void)updateAllPlayAvailability:(_Bool)arg1;
- (id)playersSatNames:(id)arg1;
- (void)persistLastSelectedPlayer;
- (void)restoreLastSelectedPlayer;
- (void)setZoneForAllPlayPlayer:(id)arg1;
@property(readonly, nonatomic) _Bool isAllPlayPlayerSelected; // @dynamic isAllPlayPlayerSelected;
- (void)terminate;
- (void)updateConnectedNetworkInfo;
- (id)localWiFiIPAddress;
- (void)restart;
- (_Bool)didWifiChange;
- (void)checkForWIFIChange;
- (void)foreground;
- (id)initWithAppName:(id)arg1;
- (id)initWithAppName:(id)arg1 haveLocalPlayer:(_Bool)arg2;
- (id)version;
- (void)stop;
- (void)startWithLocalPlayer:(_Bool)arg1;
- (id)initWithApplicationName:(id)arg1;
- (id)convertError:(id)arg1;
- (_Bool)isSelectedZone:(id)arg1;
- (_Bool)isRestoredZone:(id)arg1;
- (void)parseSelectedString:(id)arg1;
- (void)parseRestoredString:(id)arg1;
- (void)showAllPlayPlayersSelectionView;
@property(readonly, nonatomic) long long numberOfAvailableAllPlayPlayers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
