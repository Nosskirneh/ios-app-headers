//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SaavnVCAdaptor.h"

#import "UITextViewDelegate-Protocol.h"

@class InboxVC, NSArray, NSDictionary, NSString, UIActivityIndicatorView, UIButton, UIImage, UIImageView, UILabel, UITextView, UIView;

@interface TagRecapVC : SaavnVCAdaptor <UITextViewDelegate>
{
    NSDictionary *shareObject;
    UIImage *playlistArt;
    NSString *artURL;
    NSArray *tags;
    _Bool isReply;
    UIButton *sendBtn;
    UIActivityIndicatorView *spinner;
    UIView *header;
    UIImageView *art;
    UIView *messageContainer;
    UITextView *message;
    UILabel *placeholder;
    UILabel *charCount;
    int charsLeft;
    NSString *tagString;
    float keyboardHeight;
    InboxVC *_parentInbox;
}

@property(retain, nonatomic) InboxVC *parentInbox; // @synthesize parentInbox=_parentInbox;
@property(nonatomic) _Bool isReply; // @synthesize isReply;
@property(retain, nonatomic) UIImage *playlistArt; // @synthesize playlistArt;
@property(retain, nonatomic) NSString *artURL; // @synthesize artURL;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags;
@property(retain, nonatomic) NSDictionary *shareObject; // @synthesize shareObject;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)dismissView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (float)getFieldHeight;
- (void)updateForKeyboard:(float)arg1;
- (void)keyboardChanged:(id)arg1;
- (void)charCountAlert;
- (void)disableMessageField:(_Bool)arg1;
- (void)tagResponse:(id)arg1;
- (void)sendMessage;
- (void)showSendBtn;
- (void)initTextField;
- (void)initHeader;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

