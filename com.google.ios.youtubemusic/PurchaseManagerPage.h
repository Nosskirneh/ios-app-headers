//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, OrchButton, OrchDependencyGraph, OrchImageWithCaption, OrchInfoMessage, OrchInstrumentForm, OrchPageFooter, OrchPageHeader, OrchSimpleForm, OrchWebViewComponent;

@interface PurchaseManagerPage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool autoSubmit; // @dynamic autoSubmit;
@property(retain, nonatomic) OrchSimpleForm *brandLogo; // @dynamic brandLogo;
@property(retain, nonatomic) NSMutableArray *componentGroupArray; // @dynamic componentGroupArray;
@property(readonly, nonatomic) unsigned long long componentGroupArray_Count; // @dynamic componentGroupArray_Count;
@property(retain, nonatomic) OrchDependencyGraph *dependencyGraph; // @dynamic dependencyGraph;
@property(retain, nonatomic) OrchInstrumentForm *form; // @dynamic form;
@property(nonatomic) _Bool hasAutoSubmit; // @dynamic hasAutoSubmit;
@property(nonatomic) _Bool hasBrandLogo; // @dynamic hasBrandLogo;
@property(nonatomic) _Bool hasDependencyGraph; // @dynamic hasDependencyGraph;
@property(nonatomic) _Bool hasForm; // @dynamic hasForm;
@property(nonatomic) _Bool hasHideCancelButton; // @dynamic hasHideCancelButton;
@property(nonatomic) _Bool hasPageFooter; // @dynamic hasPageFooter;
@property(nonatomic) _Bool hasPageHeader; // @dynamic hasPageHeader;
@property(nonatomic) _Bool hasProgressDialogText; // @dynamic hasProgressDialogText;
@property(nonatomic) _Bool hasProgressDialogTitle; // @dynamic hasProgressDialogTitle;
@property(nonatomic) _Bool hasSubmitAfterTimeoutMillis; // @dynamic hasSubmitAfterTimeoutMillis;
@property(nonatomic) _Bool hasSubmitButton; // @dynamic hasSubmitButton;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTitleImage; // @dynamic hasTitleImage;
@property(nonatomic) _Bool hasTopInfoMessage; // @dynamic hasTopInfoMessage;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(nonatomic) _Bool hasWebViewComponent; // @dynamic hasWebViewComponent;
@property(nonatomic) _Bool hideCancelButton; // @dynamic hideCancelButton;
@property(retain, nonatomic) OrchPageFooter *pageFooter; // @dynamic pageFooter;
@property(retain, nonatomic) OrchPageHeader *pageHeader; // @dynamic pageHeader;
@property(copy, nonatomic) NSString *progressDialogText; // @dynamic progressDialogText;
@property(copy, nonatomic) NSString *progressDialogTitle; // @dynamic progressDialogTitle;
@property(retain, nonatomic) NSMutableArray *simpleFormArray; // @dynamic simpleFormArray;
@property(readonly, nonatomic) unsigned long long simpleFormArray_Count; // @dynamic simpleFormArray_Count;
@property(nonatomic) long long submitAfterTimeoutMillis; // @dynamic submitAfterTimeoutMillis;
@property(retain, nonatomic) OrchButton *submitButton; // @dynamic submitButton;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) OrchImageWithCaption *titleImage; // @dynamic titleImage;
@property(retain, nonatomic) OrchInfoMessage *topInfoMessage; // @dynamic topInfoMessage;
@property(nonatomic) long long uiReference; // @dynamic uiReference;
@property(retain, nonatomic) OrchWebViewComponent *webViewComponent; // @dynamic webViewComponent;

@end

