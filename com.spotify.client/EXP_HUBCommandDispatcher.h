//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_HUBCommandHandler.h"

@class NSDictionary;

@interface EXP_HUBCommandDispatcher : NSObject <EXP_HUBCommandHandler>
{
    NSDictionary *_commandRegister;
    id <EXP_HUBCommandHandler> _unmappedCommandHandler;
}

@property(retain, nonatomic) id <EXP_HUBCommandHandler> unmappedCommandHandler; // @synthesize unmappedCommandHandler=_unmappedCommandHandler;
@property(copy, nonatomic) NSDictionary *commandRegister; // @synthesize commandRegister=_commandRegister;
- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithCommandRegister:(id)arg1 unmappedCommandHandler:(id)arg2;

@end

