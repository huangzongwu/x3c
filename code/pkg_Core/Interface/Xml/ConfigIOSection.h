// Copyright 2008-2011 Zhang Yun Gui, rhcad@hotmail.com
// http://sourceforge.net/projects/x3c/
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*! \file ConfigIOSection.h
 *  \brief �������ö�д�ӿڵķ�װ�� CConfigIOSection
 *  \author Zhang Yun Gui, C++ Plugin Framework
 *  \date   2010.10.22
 */
#ifndef X3_XML_CONFIGIOSECTION_H_
#define X3_XML_CONFIGIOSECTION_H_

#include "Ix_ConfigData.h"

//! ���ö�д�ӿڵķ�װ�࣬��Ӧ��һ�����ݽڵ�
/*! ���ӿ������������ݶ����൱��������״��νṹ�е�һ�����ݽڵ㣬
    �� Ix_ConfigData ���Ӧ��ȫ�����ݽڵ㡣
    \ingroup _GROUP_PLUGIN_XML_
*/
class CConfigIOSection : public Cx_Interface<Ix_ConfigSection>
{
public:
    //! ���캯��
    CConfigIOSection()
    {
    }

    //! �������캯��
    CConfigIOSection(const Cx_Interface<Ix_ConfigSection>& src)
        : Cx_Interface<Ix_ConfigSection>(src)
    {
    }

    //! ��Cx_Ptr����
    CConfigIOSection(const Cx_Ptr& objConfigIO)
    {
        Cx_Interface<Ix_ConfigSection> pIFSec(objConfigIO);
        if (pIFSec.IsNotNull())
        {
            Cx_Interface<Ix_ConfigSection>::operator=(pIFSec);
        }
    }

    //! ��ֵ����������
    void operator=(const Cx_Interface<Ix_ConfigSection>& src)
    {
        Cx_Interface<Ix_ConfigSection>::operator=(src);
    }

    //! ��������
    ~CConfigIOSection()
    {
        Release();
    }

    //! �õ�һ�������ݽڵ�
    /*!
        \param name ���ݽڵ����ƣ�����б�Ż�б�ŷָ��༶���·��
        \param autoCreate ������ʱ�Ƿ��Զ�����
        \return �µ����ݽڵ㣬���������Զ�����
    */
    CConfigIOSection GetSection(
        const wchar_t* name, bool autoCreate = true) const
    {
        Ix_ConfigData* pIFData = P()->GetData();
        return pIFData->GetSection(P(), name, L"", L"", autoCreate);
    }

    //! �õ���������ʶ���Բ�����һ�����ݽڵ�
    /*!
        \param name ���ݽڵ����ƣ�����б�Ż�б�ŷָ��༶���·��
        \param attrName ��ʶһ�������ݽڵ����������
        \param attrValue �ñ�ʶ���Ӧ������ֵ
        \param autoCreate ������ʱ�Ƿ��Զ�����
        \return �µ����ݽڵ㣬���������Զ�����
    */
    CConfigIOSection GetSection(const wchar_t* name, 
        const wchar_t* attrName, ULONG attrValue, bool autoCreate = true) const
    {
        Ix_ConfigData* pIFData = P()->GetData();
        return pIFData->GetSection(P(), name, attrName, attrValue, autoCreate);
    }

    //! �õ������Բ�����һ�����ݽڵ�
    /*!
        \param name ���ݽڵ����ƣ�����б�Ż�б�ŷָ��༶���·��
        \param attrName ��ʶһ�������ݽڵ����������
        \param attrValue �ñ�ʶ���Ӧ������ֵ
        \param autoCreate ������ʱ�Ƿ��Զ�����
        \return �µ����ݽڵ㣬���������Զ�����
    */
    CConfigIOSection GetSection(const wchar_t* name, 
        const wchar_t* attrName, const wchar_t* attrValue, 
        bool autoCreate = true) const
    {
        Ix_ConfigData* pIFData = P()->GetData();
        return pIFData->GetSection(P(), name, attrName, attrValue, autoCreate);
    }

    //! �õ������Բ�����һ�����ݽڵ�
    /*!
        \param name ���ݽڵ����ƣ�����б�Ż�б�ŷָ��༶���·��
        \param attrName ��ʶһ�������ݽڵ�ĵ�һ����������
        \param attrValue �ñ�ʶ���Ӧ������ֵ
        \param attrName2 ��ʶһ�������ݽڵ�ĵڶ�����������
        \param attrValue2 �ñ�ʶ���Ӧ��attrName2������ֵ
        \param autoCreate ������ʱ�Ƿ��Զ�����
        \return �µ����ݽڵ㣬���������Զ�����
    */
    CConfigIOSection GetSection(const wchar_t* name, 
        const wchar_t* attrName, const wchar_t* attrValue, 
        const wchar_t* attrName2, const wchar_t* attrValue2, 
        bool autoCreate = true) const
    {
        Ix_ConfigData* pIFData = P()->GetData();
        return pIFData->GetSection(P(), name, attrName, attrValue, 
            attrName2, attrValue2, autoCreate);
    }
    
    //! �õ���������ʶ���Բ�����һ�����ݽڵ�
    /*!
        \param name ���ݽڵ����ƣ�����б�Ż�б�ŷָ��༶���·��
        \param attrName ��ʶһ�������ݽڵ�ĵ�һ����������
        \param attrValue �ñ�ʶ���Ӧ������ֵ
        \param attrName2 ��ʶһ�������ݽڵ�ĵڶ�����������
        \param attrValue2 �ñ�ʶ���Ӧ��attrName2������ֵ
        \param autoCreate ������ʱ�Ƿ��Զ�����
        \return �µ����ݽڵ㣬���������Զ�����
    */
    CConfigIOSection GetSection(const wchar_t* name, 
        const wchar_t* attrName, ULONG attrValue, 
        const wchar_t* attrName2, ULONG attrValue2, 
        bool autoCreate = true)
    {
        Ix_ConfigData* pIFData = P()->GetData();
        return pIFData->GetSection(P(), name, attrName, attrValue, 
            attrName2, attrValue2, autoCreate);
    }

    //! �õ��ڵ�����Ӧ���ӽڵ����
    /*!
        \param name ���ݽڵ����ƣ�����б�Ż�б�ŷָ��༶���·��
        \return �����ݽڵ�ĸ���
        \see GetSectionByIndex
    */
    long GetSectionCount(const wchar_t* name) const
    {
        Ix_ConfigData* pIFData = P()->GetData();
        return pIFData->GetSectionCount(P(), name);
    }

    //! �ڽڵ�����Ӧ���ӽڵ��еõ�ָ����ŵ������ݽڵ�
    /*!
        \param name ���ݽڵ����ƣ�����б�Ż�б�ŷָ��༶���·��
        \param index Ҫȡ�������ݽڵ�����
        \return �µ����ݽڵ㣬�����������Ըö���Ķ�д���������ԣ������� IsValid() ������Ƿ�Ϊ��Ч�ڵ�
        \see GetSectionCount
    */
    CConfigIOSection GetSectionByIndex(const wchar_t* name, long index) const
    {
        Ix_ConfigData* pIFData = P()->GetData();
        return pIFData->GetSectionByIndex(P(), name, index);
    }

    //! ����һ�����ݽڵ�
    /*!
        \param name ���ݽڵ����ƣ�����б�Ż�б�ŷָ��༶���·��
        \return �µ����ݽڵ�
    */
    CConfigIOSection AddSection(const wchar_t* name)
    {
        Ix_ConfigData* pIFData = P()->GetData();
        return pIFData->AddSection(P(), name);
    }
    
    //! ɾ�������ݽڵ�������ӽڵ�
    /*!
        \param name �ӽڵ����ݽڵ����ƣ����ܰ�����б�Ż�б��
        \param attrName �ӽڵ�ı�ʶ����������ѡֵ
        \param attrValue ��ʶ��������Ӧ��ֵ��attrName��Ϊ��ʱ��Ч
        \return ɾ�����ӽڵ����
    */
    long RemoveChildren(const wchar_t* name, const wchar_t* attrName = L"", const wchar_t* attrValue = L"")
    {
        Ix_ConfigData* pIFData = P()->GetData();
        return pIFData->RemoveChildren(P(), name, attrName, attrValue);
    }

    //! ɾ�������ݽڵ�������ӽڵ�
    /*!
        \param name �ӽڵ����ݽڵ����ƣ����ܰ�����б�Ż�б��
        \param attrName �ӽڵ�ı�ʶ����������Ϊ��
        \param attrValue ��ʶ������attrName��Ӧ��ֵ
        \return ɾ�����ӽڵ����
    */
    long RemoveChildren(const wchar_t* name, const wchar_t* attrName, ULONG attrValue)
    {
        Ix_ConfigData* pIFData = P()->GetData();
        return pIFData->RemoveChildren(P(), name, attrName, attrValue);
    }

    //! �õ���һ���ڵ�
    /*! ������ڵ�Ϊ���ڵ㣬�򷵻ؽڵ�Ϊ��Ч�ڵ�(IsValid()==false)
        \return ��һ�����ݽڵ����
    */
    CConfigIOSection GetParentSection()
    {
        Ix_ConfigData* pIFData = P()->GetData();
        return pIFData->GetParentSection(P());
    }
};

#endif // X3_XML_CONFIGIOSECTION_H_