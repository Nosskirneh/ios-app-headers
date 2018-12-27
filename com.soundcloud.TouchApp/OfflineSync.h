//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OfflineContentDataSourcing, OfflineContentServicing, OfflineStateReposing, OfflineStateTrackDataSourcing, OfflineSyncTechLogging, OfflineUserConfigDataSourcing, _TtP8Features14OfflineService_, _TtP8Features21OfflineItemLocalizing_;

@interface OfflineSync : NSObject
{
    id <OfflineContentServicing> _contentService;
    id <_TtP8Features14OfflineService_> _service;
    id <_TtP8Features21OfflineItemLocalizing_> _itemLocator;
    id <OfflineContentDataSourcing> _contentDataSource;
    id <OfflineStateReposing> _stateRepository;
    id <OfflineStateTrackDataSourcing> _trackStateDataSource;
    id <OfflineUserConfigDataSourcing> _userConfigDataSource;
    id <OfflineSyncTechLogging> _logger;
}

+ (id)make;
@property(readonly, nonatomic) id <OfflineSyncTechLogging> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <OfflineUserConfigDataSourcing> userConfigDataSource; // @synthesize userConfigDataSource=_userConfigDataSource;
@property(readonly, nonatomic) id <OfflineStateTrackDataSourcing> trackStateDataSource; // @synthesize trackStateDataSource=_trackStateDataSource;
@property(readonly, nonatomic) id <OfflineStateReposing> stateRepository; // @synthesize stateRepository=_stateRepository;
@property(readonly, nonatomic) id <OfflineContentDataSourcing> contentDataSource; // @synthesize contentDataSource=_contentDataSource;
@property(readonly, nonatomic) id <_TtP8Features21OfflineItemLocalizing_> itemLocator; // @synthesize itemLocator=_itemLocator;
@property(readonly, nonatomic) id <_TtP8Features14OfflineService_> service; // @synthesize service=_service;
@property(readonly, nonatomic) id <OfflineContentServicing> contentService; // @synthesize contentService=_contentService;
- (void).cxx_destruct;
- (id)initWithTechLogger:(id)arg1 userConfigDataSource:(id)arg2 trackStateDataSource:(id)arg3 usageTagger:(id)arg4 contentDataSource:(id)arg5 stateRepository:(id)arg6 itemLocator:(id)arg7 service:(id)arg8 contentService:(id)arg9;
- (id)initWithTechLogger:(id)arg1 usageTagger:(id)arg2 contentDataSource:(id)arg3 reachability:(id)arg4 client:(id)arg5;

@end

