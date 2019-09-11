//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageQueueTrackMove1 : SPTLogMessage
{
    NSString *_contextUriValue;
    NSString *_currentTrackUriValue;
    NSString *_targetTrackUriValue;
    long long _trackSectionBeforeValue;
    long long _trackPositionBeforeValue;
    long long _trackSectionAfterValue;
    long long _trackPositionAfterValue;
}

+ (id)messageWithContextUri:(id)arg1 currentTrackUri:(id)arg2 targetTrackUri:(id)arg3 trackSectionBefore:(long long)arg4 trackPositionBefore:(long long)arg5 trackSectionAfter:(long long)arg6 trackPositionAfter:(long long)arg7;
@property(nonatomic) long long trackPositionAfterValue; // @synthesize trackPositionAfterValue=_trackPositionAfterValue;
@property(nonatomic) long long trackSectionAfterValue; // @synthesize trackSectionAfterValue=_trackSectionAfterValue;
@property(nonatomic) long long trackPositionBeforeValue; // @synthesize trackPositionBeforeValue=_trackPositionBeforeValue;
@property(nonatomic) long long trackSectionBeforeValue; // @synthesize trackSectionBeforeValue=_trackSectionBeforeValue;
@property(copy, nonatomic) NSString *targetTrackUriValue; // @synthesize targetTrackUriValue=_targetTrackUriValue;
@property(copy, nonatomic) NSString *currentTrackUriValue; // @synthesize currentTrackUriValue=_currentTrackUriValue;
@property(copy, nonatomic) NSString *contextUriValue; // @synthesize contextUriValue=_contextUriValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

