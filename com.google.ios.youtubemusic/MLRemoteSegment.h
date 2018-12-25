//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MLSegment.h"

@class HAMRange, NSURL;

@interface MLRemoteSegment : MLSegment
{
    NSURL *_URL;
    HAMRange *_range;
}

+ (id)remoteSegmentWithPropertiesDictionary:(id)arg1;
@property(readonly, nonatomic) HAMRange *range; // @synthesize range=_range;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)propertiesDictionary;
- (id)initWithMediaID:(id)arg1 itag:(int)arg2 index:(int)arg3;
- (id)initWithMediaID:(id)arg1 itag:(int)arg2 index:(int)arg3 URL:(id)arg4 range:(id)arg5;

@end

