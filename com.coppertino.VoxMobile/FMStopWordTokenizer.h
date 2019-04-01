//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FMTokenizerDelegate-Protocol.h"

@class NSSet;
@protocol FMTokenizerDelegate;

@interface FMStopWordTokenizer : NSObject <FMTokenizerDelegate>
{
    id <FMTokenizerDelegate> m_baseTokenizer;
    NSSet *m_words;
}

+ (id)tokenizerWithFileURL:(id)arg1 baseTokenizer:(id)arg2 error:(id *)arg3;
@property(copy) NSSet *words; // @synthesize words=m_words;
- (void).cxx_destruct;
- (void)closeTokenizerCursor:(struct FMTokenizerCursor *)arg1;
- (_Bool)nextTokenForCursor:(struct FMTokenizerCursor *)arg1;
- (void)openTokenizerCursor:(struct FMTokenizerCursor *)arg1;
- (id)initWithWords:(id)arg1 baseTokenizer:(id)arg2;

@end

