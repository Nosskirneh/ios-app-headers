//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface YTInfoCardTrackingEvent : NSObject
{
    int _type;
    NSURL *_baseURL;
}

@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(int)arg1 baseURL:(id)arg2;

@end

