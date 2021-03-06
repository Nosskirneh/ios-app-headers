//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DZRLoghashDispatcher : NSObject
{
    CDUnknownBlockType _shouldDispatchBlock;
    CDUnknownBlockType _dispatchBlock;
}

+ (CDUnknownBlockType)dispatchOnFile;
+ (id)loghashDispatchFilePath;
+ (CDUnknownBlockType)dispatchOnCrashlytics;
+ (CDUnknownBlockType)dispatchOnConsole;
+ (CDUnknownBlockType)dispatchBlockWithConfiguration:(id)arg1;
+ (CDUnknownBlockType)shouldDispatchLogWithObjectDump:(id)arg1;
+ (CDUnknownBlockType)shouldDispatchLogWithSecureIdentifier:(id)arg1;
+ (CDUnknownBlockType)shouldDispatchLogWithIdentifier:(id)arg1;
+ (CDUnknownBlockType)shouldDispatchLogWithTag:(id)arg1;
+ (CDUnknownBlockType)shouldDispatchNever;
+ (CDUnknownBlockType)shouldDispatchAlways;
+ (CDUnknownBlockType)shouldDispatchBlockWithConfiguration:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType dispatchBlock; // @synthesize dispatchBlock=_dispatchBlock;
@property(copy, nonatomic) CDUnknownBlockType shouldDispatchBlock; // @synthesize shouldDispatchBlock=_shouldDispatchBlock;
- (void).cxx_destruct;
- (void)dispatchLog:(id)arg1;
- (_Bool)shouldDispatchLog:(id)arg1;
- (id)initWithShouldDispatchBlock:(CDUnknownBlockType)arg1 dispatchBlock:(CDUnknownBlockType)arg2;
- (id)initWithDictionaryConfiguration:(id)arg1;

@end

