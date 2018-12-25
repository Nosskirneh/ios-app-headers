//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, YTLabel;
@protocol YTPlaceholderTextViewDelegate;

@interface YTPlaceholderTextView : UITextView <UITextViewDelegate>
{
    YTLabel *_placeholderLabel;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _finishedBlock;
    id <YTPlaceholderTextViewDelegate> _placeholderTextViewDelegate;
}

@property(nonatomic) __weak id <YTPlaceholderTextViewDelegate> placeholderTextViewDelegate; // @synthesize placeholderTextViewDelegate=_placeholderTextViewDelegate;
- (void).cxx_destruct;
- (void)updatePlaceholderTextVisibility;
- (id)accessibilityLabel;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)setPlaceholderTypeKind:(long long)arg1 typeVariant:(long long)arg2;
- (void)setPlaceholderText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithUpdateBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

