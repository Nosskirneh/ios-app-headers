//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableAttributedString, YT608708CaptionUserPreferences;

@interface EIA608Row : NSObject
{
    CDStruct_7d92f6c3 _buffer[33];
    NSMutableAttributedString *_displayStr;
    YT608708CaptionUserPreferences *_inlinePreferences;
}

- (void).cxx_destruct;
- (void)appendCommandToDisplayStr:(CDStruct_7d92f6c3)arg1;
- (void)appendTransparentSpaceToDisplayStr;
- (void)appendStringToDisplayStr:(id)arg1;
- (void)insertCommand:(CDStruct_7d92f6c3)arg1 atCursor:(id)arg2;
- (void)backspaceAtCursor:(id)arg1;
- (void)processPreambleCommand:(CDStruct_7d92f6c3)arg1;
- (id)attributedString;
- (int)processCommand:(CDStruct_7d92f6c3)arg1 atCursor:(id)arg2;
- (void)deleteToEndOfRow:(int)arg1;

@end

