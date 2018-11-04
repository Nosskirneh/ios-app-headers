//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEStyle.h"

@class GLUELabelStyle, NSString, SPTLoginTextFieldStyle, SPTUnderlinedLabelStyle;

@interface SPTLoginInputFormViewStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_titleLabelStyle;
    SPTUnderlinedLabelStyle *_extraTitleLabelStyle;
    GLUELabelStyle *_disclosureLabelStyle;
    SPTLoginTextFieldStyle *_inputFieldStyle;
    double _inputFieldHeight;
    double _verticalSpacing;
    double _secondFieldTitleLabelTopMargin;
    double _inputFieldDisclosureLabelHeight;
}

@property(nonatomic) double inputFieldDisclosureLabelHeight; // @synthesize inputFieldDisclosureLabelHeight=_inputFieldDisclosureLabelHeight;
@property(nonatomic) double secondFieldTitleLabelTopMargin; // @synthesize secondFieldTitleLabelTopMargin=_secondFieldTitleLabelTopMargin;
@property(nonatomic) double verticalSpacing; // @synthesize verticalSpacing=_verticalSpacing;
@property(nonatomic) double inputFieldHeight; // @synthesize inputFieldHeight=_inputFieldHeight;
@property(copy, nonatomic) SPTLoginTextFieldStyle *inputFieldStyle; // @synthesize inputFieldStyle=_inputFieldStyle;
@property(copy, nonatomic) GLUELabelStyle *disclosureLabelStyle; // @synthesize disclosureLabelStyle=_disclosureLabelStyle;
@property(copy, nonatomic) SPTUnderlinedLabelStyle *extraTitleLabelStyle; // @synthesize extraTitleLabelStyle=_extraTitleLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

