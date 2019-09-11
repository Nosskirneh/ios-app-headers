//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SPTGaiaSocialListeningIntegrationManager;
@protocol GLUETheme;

@interface SPTGaiaEducationDetailModelManager : NSObject
{
    NSArray *_educationDetailModels;
    id <GLUETheme> _theme;
    SPTGaiaSocialListeningIntegrationManager *_socialListeningManager;
}

@property(readonly, nonatomic) SPTGaiaSocialListeningIntegrationManager *socialListeningManager; // @synthesize socialListeningManager=_socialListeningManager;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(copy, nonatomic) NSArray *educationDetailModels; // @synthesize educationDetailModels=_educationDetailModels;
- (void).cxx_destruct;
- (id)createSocialListeningEducationDetailModel;
- (id)createSpeakerEducationDetailModel;
- (id)createTvEducationDetailModel;
- (id)createComputerEducationDetailModel;
- (id)initWithTheme:(id)arg1 socialListeningManager:(id)arg2;

@end

