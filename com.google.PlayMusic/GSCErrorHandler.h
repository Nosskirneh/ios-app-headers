//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GSCErrorHandler : NSObject
{
    int _errorCount;
    CDUnknownBlockType _errorHandlerBlock;
}

+ (id)sharedInstance;
+ (int)errorCountInBlock:(CDUnknownBlockType)arg1;
+ (void)assertBlockDoesNotReportError:(CDUnknownBlockType)arg1;
+ (void)assertBlockReportsError:(CDUnknownBlockType)arg1;
+ (void)resetAfterTest;
@property(copy, nonatomic) CDUnknownBlockType errorHandlerBlock; // @synthesize errorHandlerBlock=_errorHandlerBlock;
@property(nonatomic) int errorCount; // @synthesize errorCount=_errorCount;
- (void).cxx_destruct;
- (void)reportError:(id)arg1 functionName:(id)arg2 lineNumber:(int)arg3 stackTrace:(id)arg4 formatString:(id)arg5 arguments:(char *)arg6;
- (void)registerErrorHandlerBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType defaultErrorHandlerBlock;

@end

