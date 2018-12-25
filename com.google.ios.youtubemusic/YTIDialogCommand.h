//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTELMCommandHandler-Protocol.h"

@class ELMPBCommand, ELMPBElement, NSString;

@interface YTIDialogCommand : GPBMessage <YTELMCommandHandler>
{
}

+ (id)descriptor;
- (void)executeCommand:(id)arg1 withContext:(id)arg2 sender:(id)arg3 recognizer:(id)arg4 result:(CDUnknownBlockType)arg5;
- (void)maybePerformCancelCommandWithContext:(id)arg1 sender:(id)arg2 recognizer:(id)arg3 result:(CDUnknownBlockType)arg4;
- (void)maybePerformActionCommandWithContext:(id)arg1 sender:(id)arg2 recognizer:(id)arg3 result:(CDUnknownBlockType)arg4;
- (id)executeWithContext:(id)arg1 sender:(id)arg2 recognizer:(id)arg3 gimme:(id)arg4;

// Remaining properties
@property(retain, nonatomic) ELMPBCommand *actionCommand; // @dynamic actionCommand;
@property(copy, nonatomic) NSString *actionTitle; // @dynamic actionTitle;
@property(retain, nonatomic) ELMPBCommand *cancelCommand; // @dynamic cancelCommand;
@property(copy, nonatomic) NSString *cancelTitle; // @dynamic cancelTitle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) ELMPBElement *element; // @dynamic element;
@property(nonatomic) _Bool hasActionCommand; // @dynamic hasActionCommand;
@property(nonatomic) _Bool hasActionTitle; // @dynamic hasActionTitle;
@property(nonatomic) _Bool hasCancelCommand; // @dynamic hasCancelCommand;
@property(nonatomic) _Bool hasCancelTitle; // @dynamic hasCancelTitle;
@property(nonatomic) _Bool hasElement; // @dynamic hasElement;
@property(nonatomic) _Bool hasSubtitle; // @dynamic hasSubtitle;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

