//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SCORStreamingConfiguration : NSObject
{
    struct StreamingConfiguration _cppStreamingConfiguration;
    NSObject *_lock;
    _Bool _systemClockJumpDetection;
}

+ (id)streamingConfigurationWithBuilderBlock:(CDUnknownBlockType)arg1;
@property(readonly) _Bool systemClockJumpDetection; // @synthesize systemClockJumpDetection=_systemClockJumpDetection;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithBuilder:(id)arg1;
@property(readonly) NSArray *restrictedPublishersList;
- (struct StreamingConfiguration)getCppStreamingConfiguration;
- (void)setCppStreamingConfiguration:(struct StreamingConfiguration)arg1;
- (id)initWithCppStreamingConfiguration:(struct StreamingConfiguration)arg1;

@end
