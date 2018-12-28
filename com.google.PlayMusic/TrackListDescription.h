//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, RadioSeed;

@interface TrackListDescription : NSObject
{
    long long _listType;
    NSString *_listID;
    RadioSeed *_radioSeed;
}

+ (id)trackListDescriptionForQueuableContainerInfo:(id)arg1 radioStation:(id)arg2;
+ (long long)trackListTypeFromQueueableContainerType:(long long)arg1;
+ (id)descriptionWithListType:(long long)arg1 listID:(id)arg2 radioSeed:(id)arg3;
+ (id)descriptionOfTrackList:(id)arg1;
@property(readonly, copy, nonatomic) RadioSeed *radioSeed; // @synthesize radioSeed=_radioSeed;
@property(readonly, copy, nonatomic) NSString *listID; // @synthesize listID=_listID;
@property(readonly, nonatomic) long long listType; // @synthesize listType=_listType;
- (void).cxx_destruct;
- (id)initWithListType:(long long)arg1 listID:(id)arg2 radioSeed:(id)arg3;

@end

