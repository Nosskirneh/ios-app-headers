//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@interface _TtC4WiMP17ReactiveTextField : UITextField
{
    // Error parsing type: , name: model
    // Error parsing type: , name: valueChangedCallback
    // Error parsing type: , name: startEditingCallback
    // Error parsing type: , name: endEditingCallback
}

- (CDUnknownBlockType).cxx_destruct;
- (void)didEndEditing;
- (void)didStartEditing;
- (void)valueChanged;
- (void)addTargets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, copy) CDUnknownBlockType endEditingCallback; // @synthesize endEditingCallback;
@property(nonatomic, copy) CDUnknownBlockType startEditingCallback; // @synthesize startEditingCallback;
@property(nonatomic, copy) CDUnknownBlockType valueChangedCallback; // @synthesize valueChangedCallback;
@property(nonatomic, copy) id model; // @synthesize model;

@end
