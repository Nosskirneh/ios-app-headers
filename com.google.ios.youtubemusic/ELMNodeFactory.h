//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ELMNodeFactory : NSObject
{
    struct unordered_map<int, __unsafe_unretained Class<ELMDisplayNode>, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, __unsafe_unretained Class<ELMDisplayNode>>>> _nodeTypeToClass;
    struct unordered_map<int, ASDisplayNode *(^)(ELMElement *, id<ELMContext>), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, ASDisplayNode *(^)(ELMElement *, id<ELMContext>)>>> _nodeTypeToCreationBlock;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCoreTypes;
- (CDUnknownBlockType)creationBlockForElement:(id)arg1 withContext:(id)arg2;
- (Class)classForElement:(id)arg1 withContext:(id)arg2;
- (_Bool)canNodeBeLayerBackedForElement:(id)arg1 withContext:(id)arg2;
- (id)nodeWithElement:(id)arg1 context:(id)arg2;
- (void)registerNodeClassWithCustomCreationBlock:(Class)arg1 withBlock:(CDUnknownBlockType)arg2 forTypeExtension:(unsigned int)arg3;
- (void)registerNodeClass:(Class)arg1 forTypeExtension:(unsigned int)arg2;
- (_Bool)canCreateNodeForElement:(id)arg1 withContext:(id)arg2;
- (id)init;

@end

