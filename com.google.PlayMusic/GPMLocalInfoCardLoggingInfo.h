//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPMUILogEventInfo-Protocol.h"

@class InfoMusicItem, NSString;

@interface GPMLocalInfoCardLoggingInfo : NSObject <GPMUILogEventInfo>
{
    InfoMusicItem *_infoItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *cardCollectionType;
- (struct NSDictionary *)tagDictionary;
- (id)detailPageInfo;
- (id)playLogCard;
- (id)initWithInfoItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

