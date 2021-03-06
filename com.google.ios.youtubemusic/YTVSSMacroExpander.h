//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTMacroExpanderProtocol-Protocol.h"

@class NSDictionary, NSString;

@interface YTVSSMacroExpander : NSObject <YTMacroExpanderProtocol>
{
    NSDictionary *_macroDictionary;
}

- (void).cxx_destruct;
- (id)wallTimeWithStartTime:(double)arg1;
- (id)stringWithString:(id)arg1;
- (id)stateWithPlaying:(_Bool)arg1;
- (id)LACTWithLACT:(double)arg1;
- (id)CMTWithMediaTime:(double)arg1;
- (id)expandedURLWithURL:(id)arg1 macros:(id)arg2;
- (id)initWithAdVSSState:(id)arg1 contentVSSState:(id)arg2 connectionType:(int)arg3 LACT:(double)arg4 visibility:(int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

