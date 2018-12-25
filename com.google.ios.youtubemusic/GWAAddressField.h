//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface GWAAddressField : NSObject
{
    _Bool _isRequired;
    _Bool _isReadOnly;
    long long _fieldType;
    NSString *_value;
    NSString *_placeholder;
    long long _keyboardType;
    NSArray *_selectionLabels;
    NSArray *_selectionValues;
}

@property(readonly, nonatomic) _Bool isReadOnly; // @synthesize isReadOnly=_isReadOnly;
@property(readonly, nonatomic) _Bool isRequired; // @synthesize isRequired=_isRequired;
@property(readonly, nonatomic) NSArray *selectionValues; // @synthesize selectionValues=_selectionValues;
@property(readonly, nonatomic) NSArray *selectionLabels; // @synthesize selectionLabels=_selectionLabels;
@property(readonly, nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(readonly, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) long long fieldType; // @synthesize fieldType=_fieldType;
- (void).cxx_destruct;
- (id)initWithFieldType:(long long)arg1 value:(id)arg2 required:(_Bool)arg3 readonly:(_Bool)arg4 placeholder:(id)arg5 selectionLabels:(id)arg6 selectionValues:(id)arg7 keyboardType:(long long)arg8;

@end

