//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SDLSoftButton, SDLSoftButtonManager, SDLSoftButtonState;

@interface SDLSoftButtonObject : NSObject
{
    NSString *_name;
    NSArray *_states;
    CDUnknownBlockType _eventHandler;
    unsigned long long _buttonId;
    NSString *_currentStateName;
    SDLSoftButtonManager *_manager;
}

@property(nonatomic) __weak SDLSoftButtonManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NSString *currentStateName; // @synthesize currentStateName=_currentStateName;
@property(nonatomic) unsigned long long buttonId; // @synthesize buttonId=_buttonId;
@property(readonly, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property(readonly, nonatomic) NSArray *states; // @synthesize states=_states;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (_Bool)sdl_hasTwoStatesOfSameName:(id)arg1;
- (id)stateWithName:(id)arg1;
@property(readonly, nonatomic) SDLSoftButton *currentStateSoftButton;
@property(readonly, copy, nonatomic) SDLSoftButtonState *currentState;
- (void)transitionToNextState;
- (_Bool)transitionToStateNamed:(id)arg1;
- (id)initWithName:(id)arg1 state:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithName:(id)arg1 states:(id)arg2 initialStateName:(id)arg3 handler:(CDUnknownBlockType)arg4;

@end

