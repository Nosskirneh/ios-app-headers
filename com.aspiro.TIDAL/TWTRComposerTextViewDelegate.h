//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString;

@interface TWTRComposerTextViewDelegate : NSObject <UITextViewDelegate>
{
    id _textChangeTarget;
    CDUnknownBlockType _textChangeHandler;
}

@property(copy, nonatomic) CDUnknownBlockType textChangeHandler; // @synthesize textChangeHandler=_textChangeHandler;
@property(nonatomic) __weak id textChangeTarget; // @synthesize textChangeTarget=_textChangeTarget;
- (void).cxx_destruct;
- (double)heightForTextStorage:(id)arg1 constrainedToWidth:(double)arg2;
- (double)heightForTextView:(id)arg1;
- (double)calculateHeightForTextView:(id)arg1;
- (void)invokeChangeHandlerWithContext:(id)arg1;
- (void)handleTextChangeForTextView:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)forceUpdateForTextView:(id)arg1;
- (void)registerTarget:(id)arg1 forTextChangeHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

