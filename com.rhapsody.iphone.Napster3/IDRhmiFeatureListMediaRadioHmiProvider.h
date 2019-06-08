//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDHmiProvider-Protocol.h"

@class IDCommunicationSystem, IDMultimediaInfo, IDNavigationSystem, IDStatusBar, NSDictionary, NSString;

@interface IDRhmiFeatureListMediaRadioHmiProvider : NSObject <IDHmiProvider>
{
    IDMultimediaInfo *_multimediaInfo;
    IDStatusBar *_hmiStatusBar;
    IDNavigationSystem *_navigationSystem;
    IDCommunicationSystem *_communicationSystem;
    NSDictionary *_viewDict;
    NSDictionary *_actionDict;
    NSDictionary *_modelDict;
    NSDictionary *_previewModelDict;
    NSDictionary *_entryButtonDict;
    NSDictionary *_notificationProviderDict;
}

@property(retain) NSDictionary *notificationProviderDict; // @synthesize notificationProviderDict=_notificationProviderDict;
@property(retain) NSDictionary *entryButtonDict; // @synthesize entryButtonDict=_entryButtonDict;
@property(retain) NSDictionary *previewModelDict; // @synthesize previewModelDict=_previewModelDict;
@property(retain) NSDictionary *modelDict; // @synthesize modelDict=_modelDict;
@property(retain) NSDictionary *actionDict; // @synthesize actionDict=_actionDict;
@property(retain) NSDictionary *viewDict; // @synthesize viewDict=_viewDict;
@property(retain) IDCommunicationSystem *communicationSystem; // @synthesize communicationSystem=_communicationSystem;
@property(retain) IDNavigationSystem *navigationSystem; // @synthesize navigationSystem=_navigationSystem;
@property(retain) IDStatusBar *hmiStatusBar; // @synthesize hmiStatusBar=_hmiStatusBar;
@property(retain) IDMultimediaInfo *multimediaInfo; // @synthesize multimediaInfo=_multimediaInfo;
- (void).cxx_destruct;
- (id)notificationProviderForId:(long long)arg1;
- (id)allNotificationProviders;
- (id)allEntryButtons;
- (id)entryButtonForId:(long long)arg1;
- (id)allViews;
- (id)viewForId:(long long)arg1;
- (id)allModels;
- (id)modelForId:(long long)arg1;
- (id)hmiActionForId:(long long)arg1;
- (id)allPreviewModels;
- (id)previewModelForId:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

