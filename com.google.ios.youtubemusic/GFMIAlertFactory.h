//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe;

@interface GFMIAlertFactory : NSObject
{
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (_Bool)hasComponentsForErrorDialog:(id)arg1;
- (id)viewWithCommonStyleForHTMLMessage:(id)arg1;
- (id)attributedTextWithCommonStyleForMessage:(id)arg1;
- (void)applyCommonStyleToAlertView:(id)arg1;
- (id)alertViewWithCommonStyle;
- (id)errorDialogWithHeader:(id)arg1 message:(id)arg2 withDefaultAcknowledgeButton:(_Bool)arg3;
- (id)alertViewFromFamilyManagementErrorPage:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
