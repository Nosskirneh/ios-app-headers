//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AEAudioFilter-Protocol.h"

@class AEAudioController, AEFloatConverter, AELimiter, NSString;

@interface AELimiterFilter : NSObject <AEAudioFilter>
{
    float **_scratchBuffer;
    AEFloatConverter *_floatConverter;
    AELimiter *_limiter;
    AEAudioController *_audioController;
    struct AudioStreamBasicDescription _clientFormat;
}

@property(nonatomic) __weak AEAudioController *audioController; // @synthesize audioController=_audioController;
@property(nonatomic) struct AudioStreamBasicDescription clientFormat; // @synthesize clientFormat=_clientFormat;
@property(retain, nonatomic) AELimiter *limiter; // @synthesize limiter=_limiter;
@property(retain, nonatomic) AEFloatConverter *floatConverter; // @synthesize floatConverter=_floatConverter;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownFunctionPointerType filterCallback;
@property(nonatomic) float level; // @dynamic level;
@property(nonatomic) unsigned int decay; // @dynamic decay;
@property(nonatomic) unsigned int attack; // @dynamic attack;
@property(nonatomic) unsigned int hold; // @dynamic hold;
- (void)dealloc;
- (id)initWithAudioController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
