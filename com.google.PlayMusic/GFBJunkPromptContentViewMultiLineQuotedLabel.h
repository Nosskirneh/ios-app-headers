//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSString;

@interface GFBJunkPromptContentViewMultiLineQuotedLabel : UILabel
{
    NSString *_collapsedWhitespaceText;
    long long _heightForOneLine;
    struct UIEdgeInsets _contentInset;
}

- (void).cxx_destruct;
- (id)stringByCollapsingAllWhitespaceInText:(id)arg1;
- (id)quotedText:(id)arg1;
- (long long)numberOfLinesForText:(id)arg1;
- (double)heightForText:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)drawTextInRect:(struct CGRect)arg1;
- (long long)currentNumberOfLines;
- (id)initWithText:(id)arg1 font:(id)arg2 contentInset:(struct UIEdgeInsets)arg3;

@end

