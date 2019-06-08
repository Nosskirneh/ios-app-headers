//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDTtsElement : NSObject
{
    NSString *_ttsString;
    CDUnknownBlockType _completionHandler;
}

+ (id)new;
@property(readonly, copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, copy) NSString *ttsString; // @synthesize ttsString=_ttsString;
- (void).cxx_destruct;
- (id)description;
- (void)executeCompletionHandler;
- (id)init;
- (id)initWithTtsString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

