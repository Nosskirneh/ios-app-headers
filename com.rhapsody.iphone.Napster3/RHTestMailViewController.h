//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHViewController.h"

@class NSArray, NSString, UILabel;
@protocol MFMailComposeViewControllerDelegate;

@interface RHTestMailViewController : RHViewController
{
    NSString *_subject;
    NSArray *_toRecipients;
    NSString *_body;
    id <MFMailComposeViewControllerDelegate> mailComposeDelegate;
    UILabel *_toLabel;
    UILabel *_subjectLabel;
    UILabel *_bodyLabel;
}

@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *subjectLabel; // @synthesize subjectLabel=_subjectLabel;
@property(retain, nonatomic) UILabel *toLabel; // @synthesize toLabel=_toLabel;
@property(nonatomic) id <MFMailComposeViewControllerDelegate> mailComposeDelegate; // @synthesize mailComposeDelegate;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSArray *toRecipients; // @synthesize toRecipients=_toRecipients;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
- (void).cxx_destruct;
- (void)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)setMessageBody:(id)arg1 isHTML:(_Bool)arg2;
- (void)setBccRecipients:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)closeButtonTapped:(id)arg1;
- (void)viewUnloading;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

