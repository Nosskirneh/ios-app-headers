//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IFlurryStreamMessage-Protocol.h"

@class NSData, NSString;

@interface FlurryStreamMessage : NSObject <IFlurryStreamMessage>
{
    int _frameType;
    double _timeStamp;
    NSData *_payload;
}

@property(retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) int frameType; // @synthesize frameType=_frameType;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

