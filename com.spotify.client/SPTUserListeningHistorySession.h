//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SPTUserListeningHistorySession : NSObject
{
    NSArray *_tracks;
    NSString *_sessionEndTime;
}

@property(copy, nonatomic) NSString *sessionEndTime; // @synthesize sessionEndTime=_sessionEndTime;
@property(copy, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
- (void).cxx_destruct;
- (id)initWithTracks:(id)arg1 andSessionEndTime:(id)arg2;

@end

