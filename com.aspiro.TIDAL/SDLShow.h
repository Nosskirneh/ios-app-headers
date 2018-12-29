//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCRequest.h"

@class NSArray, NSString, SDLImage, SDLMetadataTags;

@interface SDLShow : SDLRPCRequest
{
}

@property(retain, nonatomic) SDLMetadataTags *metadataTags;
@property(retain, nonatomic) NSArray *customPresets;
@property(retain, nonatomic) NSArray *softButtons;
@property(retain, nonatomic) SDLImage *secondaryGraphic;
@property(retain, nonatomic) SDLImage *graphic;
@property(retain, nonatomic) NSString *mediaTrack;
@property(retain, nonatomic) NSString *mediaClock;
@property(retain, nonatomic) NSString *statusBar;
@property(retain, nonatomic) NSString *alignment;
@property(retain, nonatomic) NSString *mainField4;
@property(retain, nonatomic) NSString *mainField3;
@property(retain, nonatomic) NSString *mainField2;
@property(retain, nonatomic) NSString *mainField1;
- (id)initWithMainField1:(id)arg1 mainField2:(id)arg2 mainField3:(id)arg3 mainField4:(id)arg4 alignment:(id)arg5 statusBar:(id)arg6 mediaClock:(id)arg7 mediaTrack:(id)arg8 graphic:(id)arg9 softButtons:(id)arg10 customPresets:(id)arg11 textFieldMetadata:(id)arg12;
- (id)initWithMainField1:(id)arg1 mainField2:(id)arg2 alignment:(id)arg3 statusBar:(id)arg4 mediaClock:(id)arg5 mediaTrack:(id)arg6;
- (id)initWithMainField1:(id)arg1 mainField1Type:(id)arg2 mainField2:(id)arg3 mainField2Type:(id)arg4 mainField3:(id)arg5 mainField3Type:(id)arg6 mainField4:(id)arg7 mainField4Type:(id)arg8 alignment:(id)arg9;
- (id)initWithMainField1:(id)arg1 mainField2:(id)arg2 mainField3:(id)arg3 mainField4:(id)arg4 alignment:(id)arg5;
- (id)initWithMainField1:(id)arg1 mainField1Type:(id)arg2 mainField2:(id)arg3 mainField2Type:(id)arg4 alignment:(id)arg5;
- (id)initWithMainField1:(id)arg1 mainField2:(id)arg2 alignment:(id)arg3;
- (id)init;

@end
