//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PlaylistMetaLabelInteractorDelegate-Protocol.h"

@class NSNumberFormatter, OfflineSync, PlaylistMetaDataEntity, PlaylistMetaLabelInteractor, _TtC2UI9IconLabel;
@protocol PlaylistMetaLabelInteracting, _TtP8Features24OfflineUserConfiguration_;

@interface PlaylistMetaLabelPresenter : NSObject <PlaylistMetaLabelInteractorDelegate>
{
    id <PlaylistMetaLabelInteracting> _interactor;
    _TtC2UI9IconLabel *_metaLabel;
    OfflineSync *_offlineSync;
    NSNumberFormatter *_numberFormatter;
    id _statesDisposable;
    id _configDisposable;
    PlaylistMetaDataEntity *_entity;
    unsigned long long _lastObservedSyncState;
    id <_TtP8Features24OfflineUserConfiguration_> _lastObservedConfig;
    PlaylistMetaLabelInteractor *_metaLabelInteractor;
}

@property(retain, nonatomic) PlaylistMetaLabelInteractor *metaLabelInteractor; // @synthesize metaLabelInteractor=_metaLabelInteractor;
@property(retain, nonatomic) id <_TtP8Features24OfflineUserConfiguration_> lastObservedConfig; // @synthesize lastObservedConfig=_lastObservedConfig;
@property(nonatomic) unsigned long long lastObservedSyncState; // @synthesize lastObservedSyncState=_lastObservedSyncState;
@property(retain, nonatomic) PlaylistMetaDataEntity *entity; // @synthesize entity=_entity;
@property(retain, nonatomic) id configDisposable; // @synthesize configDisposable=_configDisposable;
@property(retain, nonatomic) id statesDisposable; // @synthesize statesDisposable=_statesDisposable;
@property(readonly, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(readonly, nonatomic) OfflineSync *offlineSync; // @synthesize offlineSync=_offlineSync;
@property(readonly, nonatomic) __weak _TtC2UI9IconLabel *metaLabel; // @synthesize metaLabel=_metaLabel;
@property(retain, nonatomic) id <PlaylistMetaLabelInteracting> interactor; // @synthesize interactor=_interactor;
- (void).cxx_destruct;
- (id)playlistMetaLabelInteractorWithOfflineSync:(id)arg1;
- (id)textForPlaylist:(id)arg1 syncState:(unsigned long long)arg2 syncOnlyViaWiFi:(_Bool)arg3;
- (id)imageForPlaylist:(id)arg1 syncState:(unsigned long long)arg2;
- (id)offlineTextForSyncState:(unsigned long long)arg1 syncOnlyViaWiFi:(_Bool)arg2;
- (void)stateDidChangeWithState:(unsigned long long)arg1 config:(id)arg2;
- (_Bool)shouldRotateMetaImageWithForState:(unsigned long long)arg1;
- (id)infoTextForRelease:(id)arg1;
- (void)setMetaInfoForPlaylist:(id)arg1;
- (void)setMetaInfoForRelease:(id)arg1;
- (void)stateDidChange:(unsigned long long)arg1;
- (void)deactivate;
- (void)updateForEntity:(id)arg1;
- (id)initWithlabel:(id)arg1 offlineSync:(id)arg2 numberFormatter:(id)arg3 metaLabelInteractor:(id)arg4;
- (id)initWithlabel:(id)arg1 offlineSync:(id)arg2;
- (id)initWithLabel:(id)arg1 interactor:(id)arg2;
- (id)initWithLabel:(id)arg1;

@end
