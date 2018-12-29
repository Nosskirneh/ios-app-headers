//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TWTRAttributedLabel.h"

@class NSArray, UIColor;

@interface TWTRTweetLabel : TWTRAttributedLabel
{
    _Bool _enableURLs;
    UIColor *_linkColor;
    NSArray *_entityRanges;
}

@property(readonly, nonatomic) NSArray *entityRanges; // @synthesize entityRanges=_entityRanges;
@property(nonatomic) _Bool enableURLs; // @synthesize enableURLs=_enableURLs;
@property(retain, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
- (void).cxx_destruct;
- (void)addLinksForEntityRanges:(id)arg1;
- (_Bool)entityExistsAtPoint:(struct CGPoint)arg1;
- (void)updateTextAlignment:(id)arg1;
- (void)setTextFromTweet:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

