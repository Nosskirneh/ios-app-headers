//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SRLImplementationConfiguration;

@interface SRLRegisteredBinding : NSObject
{
    _Bool _multiBinding;
    _Bool _componentBinding;
    Class _implementationClass;
    CDUnknownBlockType _factoryBlock;
    NSString *_bindingType;
    SRLImplementationConfiguration *_implementationConfiguration;
    NSDictionary *_options;
}

+ (_Bool)validateBindingType:(id)arg1;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) SRLImplementationConfiguration *implementationConfiguration; // @synthesize implementationConfiguration=_implementationConfiguration;
@property(readonly, nonatomic, getter=isComponentBinding) _Bool componentBinding; // @synthesize componentBinding=_componentBinding;
@property(readonly, nonatomic, getter=isMultiBinding) _Bool multiBinding; // @synthesize multiBinding=_multiBinding;
@property(readonly, nonatomic) NSString *bindingType; // @synthesize bindingType=_bindingType;
@property(readonly, nonatomic) CDUnknownBlockType factoryBlock; // @synthesize factoryBlock=_factoryBlock;
@property(readonly, nonatomic) Class implementationClass; // @synthesize implementationClass=_implementationClass;
- (void).cxx_destruct;
- (id)description;
- (id)initWithClass:(Class)arg1 options:(id)arg2 factoryBlock:(CDUnknownBlockType)arg3;

@end
