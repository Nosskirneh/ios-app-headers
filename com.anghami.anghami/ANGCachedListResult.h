//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ANGCachedListResult : NSObject
{
    _Bool _disableSkipLimit;
    _Bool _disableAds;
    _Bool _disableQueueRestrictions;
    _Bool _disablePlayerRestrictions;
    NSArray *_songList;
}

@property(nonatomic) _Bool disablePlayerRestrictions; // @synthesize disablePlayerRestrictions=_disablePlayerRestrictions;
@property(nonatomic) _Bool disableQueueRestrictions; // @synthesize disableQueueRestrictions=_disableQueueRestrictions;
@property(nonatomic) _Bool disableAds; // @synthesize disableAds=_disableAds;
@property(nonatomic) _Bool disableSkipLimit; // @synthesize disableSkipLimit=_disableSkipLimit;
@property(retain, nonatomic) NSArray *songList; // @synthesize songList=_songList;
- (void).cxx_destruct;
- (id)initWithLoader:(id)arg1;

@end

