//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface EKPropertyMapping : NSObject
{
    NSString *_keyPath;
    NSString *_property;
    CDUnknownBlockType _valueBlock;
    CDUnknownBlockType _reverseBlock;
    CDUnknownBlockType _managedValueBlock;
    CDUnknownBlockType _managedReverseBlock;
}

@property(copy, nonatomic) CDUnknownBlockType managedReverseBlock; // @synthesize managedReverseBlock=_managedReverseBlock;
@property(copy, nonatomic) CDUnknownBlockType managedValueBlock; // @synthesize managedValueBlock=_managedValueBlock;
@property(copy, nonatomic) CDUnknownBlockType reverseBlock; // @synthesize reverseBlock=_reverseBlock;
@property(copy, nonatomic) CDUnknownBlockType valueBlock; // @synthesize valueBlock=_valueBlock;
@property(retain, nonatomic) NSString *property; // @synthesize property=_property;
@property(retain, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void).cxx_destruct;

@end

