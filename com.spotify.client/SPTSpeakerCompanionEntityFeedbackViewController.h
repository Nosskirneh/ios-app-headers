//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SPTSpeakerCompanionEntityFeedbackViewModel;
@protocol GLUEImageLoader, GLUETheme;

@interface SPTSpeakerCompanionEntityFeedbackViewController : UIViewController
{
    id <GLUEImageLoader> _glueImageLoader;
    SPTSpeakerCompanionEntityFeedbackViewModel *_viewModel;
    id <GLUETheme> _glueTheme;
}

@property(retain, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(retain, nonatomic) SPTSpeakerCompanionEntityFeedbackViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
- (void).cxx_destruct;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithViewModel:(id)arg1 glueImageLoader:(id)arg2 glueTheme:(id)arg3;

@end
