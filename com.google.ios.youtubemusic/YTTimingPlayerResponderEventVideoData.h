//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YTTimingPlayerResponderEventVideoData : NSObject
{
    _Bool _monetizable;
    _Bool _autoplay;
    NSString *_videoID;
    NSString *_CPN;
}

+ (id)videoDataWithVideoID:(id)arg1 CPN:(id)arg2 monetizable:(_Bool)arg3 autoplay:(_Bool)arg4;
@property(readonly, nonatomic) _Bool autoplay; // @synthesize autoplay=_autoplay;
@property(readonly, nonatomic) _Bool monetizable; // @synthesize monetizable=_monetizable;
@property(readonly, nonatomic) NSString *CPN; // @synthesize CPN=_CPN;
@property(readonly, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
- (void).cxx_destruct;
- (id)initWithVideoID:(id)arg1 CPN:(id)arg2 monetizable:(_Bool)arg3 autoplay:(_Bool)arg4;

@end
