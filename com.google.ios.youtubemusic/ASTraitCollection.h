//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ASTraitCollection : NSObject
{
    CDStruct_5cfb9e3d _prim;
    long long _userInterfaceIdiom;
    struct CGSize _containerSize;
}

+ (id)traitCollectionWithASPrimitiveTraitCollection:(CDStruct_5cfb9e3d)arg1;
@property(readonly) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
@property(readonly) long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
- (_Bool)isEqualToTraitCollection:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly) NSString *preferredContentSizeCategory;
@property(readonly) long long layoutDirection;
@property(readonly) long long forceTouchCapability;
@property(readonly) long long displayGamut;
@property(readonly) double displayScale;
@property(readonly) long long verticalSizeClass;
@property(readonly) long long horizontalSizeClass;
- (CDStruct_5cfb9e3d)primitiveTraitCollection;

@end

