//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface BITPLCrashReportExceptionInfo : NSObject
{
    NSString *_name;
    NSString *_reason;
    NSArray *_stackFrames;
}

@property(readonly, nonatomic) NSArray *stackFrames; // @synthesize stackFrames=_stackFrames;
@property(readonly, nonatomic) NSString *exceptionReason; // @synthesize exceptionReason=_reason;
@property(readonly, nonatomic) NSString *exceptionName; // @synthesize exceptionName=_name;
- (void)dealloc;
- (id)initWithExceptionName:(id)arg1 reason:(id)arg2 stackFrames:(id)arg3;
- (id)initWithExceptionName:(id)arg1 reason:(id)arg2;

@end

