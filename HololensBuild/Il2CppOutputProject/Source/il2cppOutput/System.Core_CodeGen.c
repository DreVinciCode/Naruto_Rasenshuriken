#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::IntersectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000016 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
// 0x00000019 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x0000001B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x0000001C TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001D TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001E TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001F TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000020 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000021 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000022 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000023 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000024 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000027 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000029 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000002A TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x0000002B System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x0000002C System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002D TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002F System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000030 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000031 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000033 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000035 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000036 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000037 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000038 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000039 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000003A System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003D System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003F System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000041 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000042 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000043 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000044 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000046 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000047 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000048 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000049 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000004A System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000004B System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004D System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004E System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004F System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000050 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000051 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000052 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000053 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000054 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000055 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000056 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000057 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000058 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000059 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000005A TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000005B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000005C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000005D System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000060 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000061 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000062 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000063 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000064 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000065 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000066 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000067 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000068 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000069 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000006A System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x0000006B System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x0000006C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006D System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006E System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006F System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000070 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000071 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000072 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000073 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000074 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000075 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000076 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000077 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000078 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000079 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x0000007A System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x0000007B System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x0000007C TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000007D System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x0000007E System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x0000007F System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000080 System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000081 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x00000082 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x00000083 System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x00000084 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x00000085 TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000086 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x00000087 System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x00000088 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000089 System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008A System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x0000008B System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x0000008C System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x0000008D System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x0000008E TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000008F System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x00000090 System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x00000091 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000092 System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000093 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000094 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000095 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000096 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000097 System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x00000098 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000099 System.Void System.Linq.Set`1::Resize()
// 0x0000009A System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x0000009B System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000009C System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000009D System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009E System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009F System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x000000A0 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x000000A1 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x000000A2 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000A3 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000A4 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000A5 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000A6 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A7 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A8 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000A9 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000AA System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000AB System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000AC System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000AD System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000AE System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000AF System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000B0 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000B1 TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000B2 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000B3 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000B4 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000B5 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000B6 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000B7 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000B8 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000B9 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000BA System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000BB System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000BC System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000BD System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000BE System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000BF System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000C0 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000C1 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000C2 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000C3 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000C4 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000C5 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000C6 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000C7 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000C8 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000C9 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000CA System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000CB System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000CC System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000CD T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000CE System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000CF System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[207] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[207] = 
{
	7582,
	7582,
	7834,
	7834,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	7467,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[70] = 
{
	{ 0x02000004, { 111, 4 } },
	{ 0x02000005, { 115, 9 } },
	{ 0x02000006, { 126, 7 } },
	{ 0x02000007, { 135, 10 } },
	{ 0x02000008, { 147, 11 } },
	{ 0x02000009, { 161, 9 } },
	{ 0x0200000A, { 173, 12 } },
	{ 0x0200000B, { 188, 1 } },
	{ 0x0200000C, { 189, 2 } },
	{ 0x0200000D, { 191, 12 } },
	{ 0x0200000E, { 203, 8 } },
	{ 0x0200000F, { 211, 11 } },
	{ 0x02000010, { 222, 12 } },
	{ 0x02000011, { 234, 12 } },
	{ 0x02000012, { 246, 6 } },
	{ 0x02000013, { 252, 2 } },
	{ 0x02000015, { 254, 8 } },
	{ 0x02000017, { 262, 3 } },
	{ 0x02000018, { 267, 5 } },
	{ 0x02000019, { 272, 7 } },
	{ 0x0200001A, { 279, 3 } },
	{ 0x0200001B, { 282, 7 } },
	{ 0x0200001C, { 289, 4 } },
	{ 0x0200001D, { 293, 23 } },
	{ 0x0200001F, { 316, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 1 } },
	{ 0x0600000C, { 34, 2 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 2 } },
	{ 0x0600000F, { 40, 1 } },
	{ 0x06000010, { 41, 1 } },
	{ 0x06000011, { 42, 2 } },
	{ 0x06000012, { 44, 1 } },
	{ 0x06000013, { 45, 2 } },
	{ 0x06000014, { 47, 1 } },
	{ 0x06000015, { 48, 2 } },
	{ 0x06000016, { 50, 3 } },
	{ 0x06000017, { 53, 2 } },
	{ 0x06000018, { 55, 1 } },
	{ 0x06000019, { 56, 7 } },
	{ 0x0600001A, { 63, 2 } },
	{ 0x0600001B, { 65, 2 } },
	{ 0x0600001C, { 67, 4 } },
	{ 0x0600001D, { 71, 4 } },
	{ 0x0600001E, { 75, 3 } },
	{ 0x0600001F, { 78, 4 } },
	{ 0x06000020, { 82, 3 } },
	{ 0x06000021, { 85, 3 } },
	{ 0x06000022, { 88, 1 } },
	{ 0x06000023, { 89, 1 } },
	{ 0x06000024, { 90, 3 } },
	{ 0x06000025, { 93, 3 } },
	{ 0x06000026, { 96, 2 } },
	{ 0x06000027, { 98, 3 } },
	{ 0x06000028, { 101, 2 } },
	{ 0x06000029, { 103, 5 } },
	{ 0x0600002A, { 108, 3 } },
	{ 0x0600003B, { 124, 2 } },
	{ 0x06000040, { 133, 2 } },
	{ 0x06000045, { 145, 2 } },
	{ 0x0600004B, { 158, 3 } },
	{ 0x06000050, { 170, 3 } },
	{ 0x06000055, { 185, 3 } },
	{ 0x0600009E, { 265, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[318] = 
{
	{ (Il2CppRGCTXDataType)2, 7350 },
	{ (Il2CppRGCTXDataType)3, 27836 },
	{ (Il2CppRGCTXDataType)2, 11838 },
	{ (Il2CppRGCTXDataType)2, 10978 },
	{ (Il2CppRGCTXDataType)3, 48909 },
	{ (Il2CppRGCTXDataType)2, 8091 },
	{ (Il2CppRGCTXDataType)2, 11012 },
	{ (Il2CppRGCTXDataType)3, 48974 },
	{ (Il2CppRGCTXDataType)2, 10990 },
	{ (Il2CppRGCTXDataType)3, 48925 },
	{ (Il2CppRGCTXDataType)2, 7351 },
	{ (Il2CppRGCTXDataType)3, 27837 },
	{ (Il2CppRGCTXDataType)2, 11871 },
	{ (Il2CppRGCTXDataType)2, 11024 },
	{ (Il2CppRGCTXDataType)3, 48990 },
	{ (Il2CppRGCTXDataType)2, 8119 },
	{ (Il2CppRGCTXDataType)2, 11062 },
	{ (Il2CppRGCTXDataType)3, 49170 },
	{ (Il2CppRGCTXDataType)2, 11043 },
	{ (Il2CppRGCTXDataType)3, 49072 },
	{ (Il2CppRGCTXDataType)2, 1355 },
	{ (Il2CppRGCTXDataType)3, 214 },
	{ (Il2CppRGCTXDataType)3, 215 },
	{ (Il2CppRGCTXDataType)2, 4280 },
	{ (Il2CppRGCTXDataType)3, 17527 },
	{ (Il2CppRGCTXDataType)2, 1356 },
	{ (Il2CppRGCTXDataType)3, 232 },
	{ (Il2CppRGCTXDataType)3, 233 },
	{ (Il2CppRGCTXDataType)2, 4301 },
	{ (Il2CppRGCTXDataType)3, 17538 },
	{ (Il2CppRGCTXDataType)3, 54812 },
	{ (Il2CppRGCTXDataType)2, 1397 },
	{ (Il2CppRGCTXDataType)3, 411 },
	{ (Il2CppRGCTXDataType)3, 54818 },
	{ (Il2CppRGCTXDataType)2, 1405 },
	{ (Il2CppRGCTXDataType)3, 447 },
	{ (Il2CppRGCTXDataType)2, 8919 },
	{ (Il2CppRGCTXDataType)3, 38633 },
	{ (Il2CppRGCTXDataType)2, 8920 },
	{ (Il2CppRGCTXDataType)3, 38634 },
	{ (Il2CppRGCTXDataType)3, 22944 },
	{ (Il2CppRGCTXDataType)3, 54741 },
	{ (Il2CppRGCTXDataType)2, 1362 },
	{ (Il2CppRGCTXDataType)3, 291 },
	{ (Il2CppRGCTXDataType)3, 54867 },
	{ (Il2CppRGCTXDataType)2, 1408 },
	{ (Il2CppRGCTXDataType)3, 470 },
	{ (Il2CppRGCTXDataType)3, 54763 },
	{ (Il2CppRGCTXDataType)2, 1389 },
	{ (Il2CppRGCTXDataType)3, 383 },
	{ (Il2CppRGCTXDataType)2, 1758 },
	{ (Il2CppRGCTXDataType)3, 3283 },
	{ (Il2CppRGCTXDataType)3, 3284 },
	{ (Il2CppRGCTXDataType)2, 8092 },
	{ (Il2CppRGCTXDataType)3, 30079 },
	{ (Il2CppRGCTXDataType)3, 54850 },
	{ (Il2CppRGCTXDataType)2, 2671 },
	{ (Il2CppRGCTXDataType)3, 7746 },
	{ (Il2CppRGCTXDataType)2, 4889 },
	{ (Il2CppRGCTXDataType)2, 5197 },
	{ (Il2CppRGCTXDataType)3, 17536 },
	{ (Il2CppRGCTXDataType)3, 17537 },
	{ (Il2CppRGCTXDataType)3, 7747 },
	{ (Il2CppRGCTXDataType)2, 4840 },
	{ (Il2CppRGCTXDataType)3, 54670 },
	{ (Il2CppRGCTXDataType)2, 1359 },
	{ (Il2CppRGCTXDataType)3, 277 },
	{ (Il2CppRGCTXDataType)2, 6430 },
	{ (Il2CppRGCTXDataType)2, 4600 },
	{ (Il2CppRGCTXDataType)2, 4856 },
	{ (Il2CppRGCTXDataType)2, 5186 },
	{ (Il2CppRGCTXDataType)2, 6431 },
	{ (Il2CppRGCTXDataType)2, 4601 },
	{ (Il2CppRGCTXDataType)2, 4857 },
	{ (Il2CppRGCTXDataType)2, 5187 },
	{ (Il2CppRGCTXDataType)2, 4858 },
	{ (Il2CppRGCTXDataType)2, 5188 },
	{ (Il2CppRGCTXDataType)3, 17529 },
	{ (Il2CppRGCTXDataType)2, 6432 },
	{ (Il2CppRGCTXDataType)2, 4602 },
	{ (Il2CppRGCTXDataType)2, 4859 },
	{ (Il2CppRGCTXDataType)2, 5189 },
	{ (Il2CppRGCTXDataType)2, 4860 },
	{ (Il2CppRGCTXDataType)2, 5190 },
	{ (Il2CppRGCTXDataType)3, 17530 },
	{ (Il2CppRGCTXDataType)2, 6429 },
	{ (Il2CppRGCTXDataType)2, 4855 },
	{ (Il2CppRGCTXDataType)2, 5185 },
	{ (Il2CppRGCTXDataType)2, 2981 },
	{ (Il2CppRGCTXDataType)2, 4836 },
	{ (Il2CppRGCTXDataType)2, 4837 },
	{ (Il2CppRGCTXDataType)2, 5182 },
	{ (Il2CppRGCTXDataType)3, 17526 },
	{ (Il2CppRGCTXDataType)2, 4835 },
	{ (Il2CppRGCTXDataType)2, 5181 },
	{ (Il2CppRGCTXDataType)3, 17525 },
	{ (Il2CppRGCTXDataType)2, 4599 },
	{ (Il2CppRGCTXDataType)2, 4853 },
	{ (Il2CppRGCTXDataType)2, 4854 },
	{ (Il2CppRGCTXDataType)2, 5184 },
	{ (Il2CppRGCTXDataType)3, 17528 },
	{ (Il2CppRGCTXDataType)2, 4598 },
	{ (Il2CppRGCTXDataType)3, 54713 },
	{ (Il2CppRGCTXDataType)3, 16076 },
	{ (Il2CppRGCTXDataType)2, 4048 },
	{ (Il2CppRGCTXDataType)2, 4839 },
	{ (Il2CppRGCTXDataType)2, 5183 },
	{ (Il2CppRGCTXDataType)2, 5436 },
	{ (Il2CppRGCTXDataType)2, 4886 },
	{ (Il2CppRGCTXDataType)2, 5196 },
	{ (Il2CppRGCTXDataType)3, 17802 },
	{ (Il2CppRGCTXDataType)3, 27838 },
	{ (Il2CppRGCTXDataType)3, 27840 },
	{ (Il2CppRGCTXDataType)2, 969 },
	{ (Il2CppRGCTXDataType)3, 27839 },
	{ (Il2CppRGCTXDataType)3, 27848 },
	{ (Il2CppRGCTXDataType)2, 7354 },
	{ (Il2CppRGCTXDataType)2, 10991 },
	{ (Il2CppRGCTXDataType)3, 48926 },
	{ (Il2CppRGCTXDataType)3, 27849 },
	{ (Il2CppRGCTXDataType)2, 4952 },
	{ (Il2CppRGCTXDataType)2, 5246 },
	{ (Il2CppRGCTXDataType)3, 17546 },
	{ (Il2CppRGCTXDataType)3, 54673 },
	{ (Il2CppRGCTXDataType)2, 11044 },
	{ (Il2CppRGCTXDataType)3, 49073 },
	{ (Il2CppRGCTXDataType)3, 27841 },
	{ (Il2CppRGCTXDataType)2, 7353 },
	{ (Il2CppRGCTXDataType)2, 10979 },
	{ (Il2CppRGCTXDataType)3, 48910 },
	{ (Il2CppRGCTXDataType)3, 17545 },
	{ (Il2CppRGCTXDataType)3, 27842 },
	{ (Il2CppRGCTXDataType)3, 54672 },
	{ (Il2CppRGCTXDataType)2, 11025 },
	{ (Il2CppRGCTXDataType)3, 48991 },
	{ (Il2CppRGCTXDataType)3, 27855 },
	{ (Il2CppRGCTXDataType)2, 7355 },
	{ (Il2CppRGCTXDataType)2, 11013 },
	{ (Il2CppRGCTXDataType)3, 48975 },
	{ (Il2CppRGCTXDataType)3, 30151 },
	{ (Il2CppRGCTXDataType)3, 13836 },
	{ (Il2CppRGCTXDataType)3, 17547 },
	{ (Il2CppRGCTXDataType)3, 13835 },
	{ (Il2CppRGCTXDataType)3, 27856 },
	{ (Il2CppRGCTXDataType)3, 54674 },
	{ (Il2CppRGCTXDataType)2, 11063 },
	{ (Il2CppRGCTXDataType)3, 49171 },
	{ (Il2CppRGCTXDataType)3, 27869 },
	{ (Il2CppRGCTXDataType)2, 7357 },
	{ (Il2CppRGCTXDataType)2, 11046 },
	{ (Il2CppRGCTXDataType)3, 49075 },
	{ (Il2CppRGCTXDataType)3, 27870 },
	{ (Il2CppRGCTXDataType)2, 4955 },
	{ (Il2CppRGCTXDataType)2, 5249 },
	{ (Il2CppRGCTXDataType)3, 17551 },
	{ (Il2CppRGCTXDataType)3, 17550 },
	{ (Il2CppRGCTXDataType)2, 10993 },
	{ (Il2CppRGCTXDataType)3, 48928 },
	{ (Il2CppRGCTXDataType)3, 54684 },
	{ (Il2CppRGCTXDataType)2, 11045 },
	{ (Il2CppRGCTXDataType)3, 49074 },
	{ (Il2CppRGCTXDataType)3, 27862 },
	{ (Il2CppRGCTXDataType)2, 7356 },
	{ (Il2CppRGCTXDataType)2, 11027 },
	{ (Il2CppRGCTXDataType)3, 48993 },
	{ (Il2CppRGCTXDataType)3, 17549 },
	{ (Il2CppRGCTXDataType)3, 17548 },
	{ (Il2CppRGCTXDataType)3, 27863 },
	{ (Il2CppRGCTXDataType)2, 10992 },
	{ (Il2CppRGCTXDataType)3, 48927 },
	{ (Il2CppRGCTXDataType)3, 54683 },
	{ (Il2CppRGCTXDataType)2, 11026 },
	{ (Il2CppRGCTXDataType)3, 48992 },
	{ (Il2CppRGCTXDataType)3, 27876 },
	{ (Il2CppRGCTXDataType)2, 7358 },
	{ (Il2CppRGCTXDataType)2, 11065 },
	{ (Il2CppRGCTXDataType)3, 49173 },
	{ (Il2CppRGCTXDataType)3, 30152 },
	{ (Il2CppRGCTXDataType)3, 13838 },
	{ (Il2CppRGCTXDataType)3, 17553 },
	{ (Il2CppRGCTXDataType)3, 17552 },
	{ (Il2CppRGCTXDataType)3, 13837 },
	{ (Il2CppRGCTXDataType)3, 27877 },
	{ (Il2CppRGCTXDataType)2, 10994 },
	{ (Il2CppRGCTXDataType)3, 48929 },
	{ (Il2CppRGCTXDataType)3, 54685 },
	{ (Il2CppRGCTXDataType)2, 11064 },
	{ (Il2CppRGCTXDataType)3, 49172 },
	{ (Il2CppRGCTXDataType)3, 17542 },
	{ (Il2CppRGCTXDataType)3, 17543 },
	{ (Il2CppRGCTXDataType)3, 17554 },
	{ (Il2CppRGCTXDataType)3, 414 },
	{ (Il2CppRGCTXDataType)3, 413 },
	{ (Il2CppRGCTXDataType)2, 4941 },
	{ (Il2CppRGCTXDataType)2, 5238 },
	{ (Il2CppRGCTXDataType)3, 17544 },
	{ (Il2CppRGCTXDataType)2, 4978 },
	{ (Il2CppRGCTXDataType)2, 5279 },
	{ (Il2CppRGCTXDataType)3, 416 },
	{ (Il2CppRGCTXDataType)2, 1222 },
	{ (Il2CppRGCTXDataType)2, 1398 },
	{ (Il2CppRGCTXDataType)3, 412 },
	{ (Il2CppRGCTXDataType)3, 415 },
	{ (Il2CppRGCTXDataType)3, 449 },
	{ (Il2CppRGCTXDataType)2, 4944 },
	{ (Il2CppRGCTXDataType)2, 5240 },
	{ (Il2CppRGCTXDataType)3, 451 },
	{ (Il2CppRGCTXDataType)2, 965 },
	{ (Il2CppRGCTXDataType)2, 1406 },
	{ (Il2CppRGCTXDataType)3, 448 },
	{ (Il2CppRGCTXDataType)3, 450 },
	{ (Il2CppRGCTXDataType)3, 293 },
	{ (Il2CppRGCTXDataType)2, 10131 },
	{ (Il2CppRGCTXDataType)3, 44667 },
	{ (Il2CppRGCTXDataType)2, 4935 },
	{ (Il2CppRGCTXDataType)2, 5234 },
	{ (Il2CppRGCTXDataType)3, 44668 },
	{ (Il2CppRGCTXDataType)3, 295 },
	{ (Il2CppRGCTXDataType)2, 960 },
	{ (Il2CppRGCTXDataType)2, 1363 },
	{ (Il2CppRGCTXDataType)3, 292 },
	{ (Il2CppRGCTXDataType)3, 294 },
	{ (Il2CppRGCTXDataType)3, 472 },
	{ (Il2CppRGCTXDataType)3, 473 },
	{ (Il2CppRGCTXDataType)2, 10135 },
	{ (Il2CppRGCTXDataType)3, 44672 },
	{ (Il2CppRGCTXDataType)2, 4947 },
	{ (Il2CppRGCTXDataType)2, 5242 },
	{ (Il2CppRGCTXDataType)3, 44673 },
	{ (Il2CppRGCTXDataType)3, 475 },
	{ (Il2CppRGCTXDataType)2, 967 },
	{ (Il2CppRGCTXDataType)2, 1409 },
	{ (Il2CppRGCTXDataType)3, 471 },
	{ (Il2CppRGCTXDataType)3, 474 },
	{ (Il2CppRGCTXDataType)3, 385 },
	{ (Il2CppRGCTXDataType)2, 10133 },
	{ (Il2CppRGCTXDataType)3, 44669 },
	{ (Il2CppRGCTXDataType)2, 4938 },
	{ (Il2CppRGCTXDataType)2, 5236 },
	{ (Il2CppRGCTXDataType)3, 44670 },
	{ (Il2CppRGCTXDataType)3, 44671 },
	{ (Il2CppRGCTXDataType)3, 387 },
	{ (Il2CppRGCTXDataType)2, 962 },
	{ (Il2CppRGCTXDataType)2, 1390 },
	{ (Il2CppRGCTXDataType)3, 384 },
	{ (Il2CppRGCTXDataType)3, 386 },
	{ (Il2CppRGCTXDataType)3, 279 },
	{ (Il2CppRGCTXDataType)2, 958 },
	{ (Il2CppRGCTXDataType)3, 281 },
	{ (Il2CppRGCTXDataType)2, 1360 },
	{ (Il2CppRGCTXDataType)3, 278 },
	{ (Il2CppRGCTXDataType)3, 280 },
	{ (Il2CppRGCTXDataType)2, 11890 },
	{ (Il2CppRGCTXDataType)2, 2982 },
	{ (Il2CppRGCTXDataType)3, 16118 },
	{ (Il2CppRGCTXDataType)2, 4065 },
	{ (Il2CppRGCTXDataType)2, 12372 },
	{ (Il2CppRGCTXDataType)3, 44664 },
	{ (Il2CppRGCTXDataType)3, 44665 },
	{ (Il2CppRGCTXDataType)2, 5453 },
	{ (Il2CppRGCTXDataType)3, 44666 },
	{ (Il2CppRGCTXDataType)2, 855 },
	{ (Il2CppRGCTXDataType)2, 1365 },
	{ (Il2CppRGCTXDataType)3, 305 },
	{ (Il2CppRGCTXDataType)3, 38608 },
	{ (Il2CppRGCTXDataType)2, 8921 },
	{ (Il2CppRGCTXDataType)3, 38635 },
	{ (Il2CppRGCTXDataType)2, 1759 },
	{ (Il2CppRGCTXDataType)3, 3285 },
	{ (Il2CppRGCTXDataType)3, 38614 },
	{ (Il2CppRGCTXDataType)3, 13777 },
	{ (Il2CppRGCTXDataType)2, 1007 },
	{ (Il2CppRGCTXDataType)3, 38609 },
	{ (Il2CppRGCTXDataType)2, 8916 },
	{ (Il2CppRGCTXDataType)3, 3718 },
	{ (Il2CppRGCTXDataType)2, 1782 },
	{ (Il2CppRGCTXDataType)2, 3179 },
	{ (Il2CppRGCTXDataType)3, 13795 },
	{ (Il2CppRGCTXDataType)3, 38610 },
	{ (Il2CppRGCTXDataType)3, 13772 },
	{ (Il2CppRGCTXDataType)3, 13773 },
	{ (Il2CppRGCTXDataType)3, 13771 },
	{ (Il2CppRGCTXDataType)3, 13774 },
	{ (Il2CppRGCTXDataType)2, 3175 },
	{ (Il2CppRGCTXDataType)2, 11951 },
	{ (Il2CppRGCTXDataType)3, 17540 },
	{ (Il2CppRGCTXDataType)3, 13776 },
	{ (Il2CppRGCTXDataType)2, 4765 },
	{ (Il2CppRGCTXDataType)3, 13775 },
	{ (Il2CppRGCTXDataType)2, 4607 },
	{ (Il2CppRGCTXDataType)2, 11880 },
	{ (Il2CppRGCTXDataType)2, 4891 },
	{ (Il2CppRGCTXDataType)2, 5199 },
	{ (Il2CppRGCTXDataType)3, 16097 },
	{ (Il2CppRGCTXDataType)2, 4058 },
	{ (Il2CppRGCTXDataType)3, 18534 },
	{ (Il2CppRGCTXDataType)3, 18535 },
	{ (Il2CppRGCTXDataType)3, 18540 },
	{ (Il2CppRGCTXDataType)2, 5447 },
	{ (Il2CppRGCTXDataType)3, 18537 },
	{ (Il2CppRGCTXDataType)3, 56003 },
	{ (Il2CppRGCTXDataType)2, 3183 },
	{ (Il2CppRGCTXDataType)3, 13825 },
	{ (Il2CppRGCTXDataType)1, 4756 },
	{ (Il2CppRGCTXDataType)2, 11896 },
	{ (Il2CppRGCTXDataType)3, 18536 },
	{ (Il2CppRGCTXDataType)1, 11896 },
	{ (Il2CppRGCTXDataType)1, 5447 },
	{ (Il2CppRGCTXDataType)2, 12370 },
	{ (Il2CppRGCTXDataType)2, 11896 },
	{ (Il2CppRGCTXDataType)2, 4897 },
	{ (Il2CppRGCTXDataType)2, 5203 },
	{ (Il2CppRGCTXDataType)3, 18541 },
	{ (Il2CppRGCTXDataType)3, 18539 },
	{ (Il2CppRGCTXDataType)3, 18538 },
	{ (Il2CppRGCTXDataType)2, 728 },
	{ (Il2CppRGCTXDataType)3, 13839 },
	{ (Il2CppRGCTXDataType)2, 979 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	207,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	70,
	s_rgctxIndices,
	318,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
