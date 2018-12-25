//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GWAButtonViewDelegate-Protocol.h"
#import "GWACollectionViewCell-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class GWAButtonView, GWAInfoMessageView, NSData, NSString, OrchDocumentDownload, UIImageView, UIWebView;
@protocol GWADocumentDownloadDelegate;

@interface GWADocumentDownloadView : UIView <UIWebViewDelegate, GWAButtonViewDelegate, GWACollectionViewCell>
{
    OrchDocumentDownload *_proto;
    UIImageView *_backgroundImageView;
    GWAButtonView *_buttonView;
    UIWebView *_webView;
    GWAInfoMessageView *_errorMessageView;
    _Bool _hasViewedDocument;
    _Bool _isOptionalToView;
    NSData *_documentData;
    id <GWADocumentDownloadDelegate> _delegate;
}

@property(retain, nonatomic) id <GWADocumentDownloadDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSData *documentData; // @synthesize documentData=_documentData;
- (void).cxx_destruct;
- (id)errorMessageView;
- (id)buttonView;
- (void)buttonTapped:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (double)heightWithConstrainedToWidth:(double)arg1;
- (void)layoutSubviews;
- (_Bool)isSubmittable;
- (_Bool)hasErrors;
- (_Bool)isComplete;
- (void)validate;
- (id)initWithProto:(id)arg1 viewDocumentButtonTitle:(id)arg2 isOptionalToView:(_Bool)arg3 notSeenErrorMessage:(id)arg4 context:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

